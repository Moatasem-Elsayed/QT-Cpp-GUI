#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtNetwork/QNetworkReply"
#include "qdebug.h"
#include <string>
#include <QDesktopServices>
#include <QDir>
#include "string.h"
/****************************************************************/
/*                        prototype                             */
/****************************************************************/
void LCDAzansFill( Ui::MainWindow *ui_temp);
void Result_Text(Ui::MainWindow *ui);
/****************************************************************/
/*                        Global Variables                      */
/****************************************************************/
int GlobalX=0;
QChar azanFajr[14] ;
QChar azanDohr[14] ;
QChar azanAsr[14] ;
QChar azanMaghrb[14] ;
QChar azanAsha[14] ;
QString Goverments[10]={"aswan","Alexandria","Asyut","giza","cairo","Ismailia","Luxor","Minya","Sohag","Suez"};
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Adjust timer to count Every Seconds
    timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(UpdateClock()));
    timer->start(1000);

    //Fill Goverments in ComboBox
    for(uint8_t i=0;i<10;i++)
    {
        ui->cbx_goverments->addItem(Goverments[i]);
    }
    // Handling Network Manger
    manager = new QNetworkAccessManager();
    connect(manager, &QNetworkAccessManager::finished,
            this, [=](QNetworkReply *reply) {
        if (reply->error()) {
            qDebug() << reply->errorString();
            return;
        }
        //Parsing of praying time
        QString answer = reply->readAll();
        qDebug()<<answer;
        Parser_PrayingTimes(answer);
        //Fill Lcd Displays with the timing
        LCDAzansFill(ui);
        //Reset Results of checkbox
        GlobalX=0;
        Result_Text(ui);
    }
    );
    trayIcon = new QSystemTrayIcon(this);
    trayIcon->setIcon(QIcon(":/rec/prayer.png"));
    trayIcon->show();
    /* Also connect clicking on the icon to the signal processor of this press* */
    connect(trayIcon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)),
            this, SLOT(iconActivated(QSystemTrayIcon::ActivationReason)));
}
void MainWindow::Parser_PrayingTimes(QString answer)
{
    //Fajr
    auto splitstring =answer.indexOf("Fajr\":\"")+strlen("Fajr\":\"");;
    memcpy(azanFajr,(QChar*)&answer[splitstring],10);
    qDebug() << (QString)azanFajr;
    //Dohr
    splitstring =answer.indexOf("Dhuhr\":\"")+strlen("Dhuhr\":\"");;
    memcpy(azanDohr,(QChar*)&answer[splitstring],10);
    qDebug() << (QString)azanDohr;
    //maghrb
    splitstring =answer.indexOf("Asr\":\"")+strlen("Asr\":\"");;
    memcpy(azanAsr,(QChar*)&answer[splitstring],10);
    qDebug() << (QString)azanAsr;
    //maghrb
    splitstring =answer.indexOf("Maghrib\":\"")+strlen("Maghrib\":\"");;
    memcpy(azanMaghrb,(QChar*)&answer[splitstring],10);
    qDebug() << (QString)azanMaghrb;
    //asha
    splitstring =answer.indexOf("Isha\":\"")+strlen("Isha\":\"");;
    memcpy(azanAsha,(QChar*)&answer[splitstring],10);
    qDebug() << (QString)azanAsha;
}
void Azan_Start()
{
    auto path= QDir::currentPath()+"/debug/sound/azan.mp3";
    path=path.remove("file:///");
    qDebug()<<path;
    QUrl mp3Url = QUrl::fromLocalFile(path);
    QDesktopServices::openUrl(mp3Url);
}
void MainWindow::UpdateClock()
{
    static bool azanflag=false;
    static int tick=0;
    QTime time=QTime::currentTime();
    QDate date=QDate::currentDate();
    ui->label->setText("   "+time.toString("hh : mm : ss")+"\n   "+date.toString("MM/dd/yy"));
    //qDebug()<<time.toString("hh:mm");

    if( (time.toString("hh:mm")== (QString)azanFajr ||
         time.toString("hh:mm")== (QString)azanDohr ||
         time.toString("hh:mm")== (QString)azanAsr||
         time.toString("hh:mm")== (QString)azanMaghrb||
         time.toString("hh:mm")== (QString)azanAsha)
            && (azanflag==false) )
    {
        Azan_Start();
        azanflag=true;
    }
    if(azanflag==true)
    {
        tick++;
        if(tick ==240)
        {
            azanflag=0;
            tick=0;
        }
    }

}

MainWindow::~MainWindow()
{
    delete ui;
    delete manager;
}
void LCDAzansFill( Ui::MainWindow *ui_temp)
{
    ui_temp->lcd_fagr_9->display((QString)azanFajr);
    ui_temp->lcd_dohr->display((QString)azanDohr);
    ui_temp->lcd_asr->display((QString)azanAsr);
    ui_temp->lcd_fmaghrb->display((QString)azanMaghrb);
    ui_temp->lcd_asha->display((QString)azanAsha);
}
void Clear_Checkbox( Ui::MainWindow *ui_temp)
{
    ui_temp->chbx_fagr->setChecked(false);
    ui_temp->chbx_dohr->setChecked(false);
    ui_temp->chbx_asr->setChecked(false);
    ui_temp->chbx_mghrb->setChecked(false);
    ui_temp->chbx_asha->setChecked(false);

}

void MainWindow::on_commandLinkButton_clicked()
{

    Clear_Checkbox(ui);
    request.setUrl(QUrl(url_muslim+ui->cbx_goverments->currentText()));
    manager->get(request);

}
void Result_Text(Ui::MainWindow *ui)
{
    GlobalX>5 ? (GlobalX=5) :(GlobalX);
    switch (GlobalX) {
    case 1:
        ui->lbl_Result->setText("جيد");
        break;
    case 2:
        ui->lbl_Result->setText("جيد جدا");
        break;
    case 3:
        ui->lbl_Result->setText("امتياز");
        break;
    case 4:
        ui->lbl_Result->setText("امتياز جدا ");
        break;
    case 5:
        ui->lbl_Result->setText("الحمد الله");
        break;
    default:
        ui->lbl_Result->setText(" مقبول");
        break;
    }
}

void MainWindow::changeEvent(QEvent *event)
{
    if(event->type() == QEvent::WindowStateChange) {
        if(isMinimized())
        {
            event->ignore();
            this->hide();
            QSystemTrayIcon::MessageIcon icon = QSystemTrayIcon::MessageIcon(QSystemTrayIcon::Information);
            trayIcon->showMessage("إلا صلاتى","متنسنيش انا هتا ", icon,50);
        }
    }
}

void MainWindow::iconActivated(QSystemTrayIcon::ActivationReason reason)
{
    switch (reason){
    case QSystemTrayIcon::Trigger:
        this->show();
        this->showNormal();
        break;
    default:
        break;
    }
}
/****************************************************/
/* Check Box Of All Praying Values******************/
void MainWindow::on_chbx_asha_stateChanged(int arg1)
{
    (ui->chbx_asha->isChecked()) ?  (GlobalX++) : (GlobalX) ;
    Result_Text(ui);
    (void)arg1;
}
void MainWindow::on_chbx_fagr_stateChanged(int arg1)
{
    (ui->chbx_fagr->isChecked()) ? (GlobalX++) : (GlobalX) ;
    Result_Text(ui);
    (void)arg1;
}
void MainWindow::on_chbx_dohr_stateChanged(int arg1)
{
    (ui->chbx_dohr->isChecked()) ? (GlobalX++) : (GlobalX) ;
    Result_Text(ui);
    (void)arg1;
}
void MainWindow::on_chbx_asr_stateChanged(int arg1)
{
    (ui->chbx_asr->isChecked()) ?   (GlobalX++) : (GlobalX) ;
    Result_Text(ui);
    (void)arg1;
}
void MainWindow::on_chbx_mghrb_stateChanged(int arg1)
{
    (ui->chbx_mghrb->isChecked()) ? (GlobalX++) : (GlobalX) ;
    Result_Text(ui);
    (void)arg1;
}

