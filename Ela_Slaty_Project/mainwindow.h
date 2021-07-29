#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QtNetwork/QNetworkRequest"
#include "iostream"
#include "QtNetwork/QNetworkAccessManager"
#include <QTimer>
#include <QDateTime>
#include <QSystemTrayIcon>

#define  url_muslim  "http://api.pray.zone/v2/times/today.json?city="

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    friend void Clear_Checkbox( Ui::MainWindow *ui_temp);
    friend void LCDAzansFill( Ui::MainWindow *ui_temp);
    friend void Result_Text( Ui::MainWindow *ui_temp);
    void Parser_PrayingTimes(QString answer);

public slots:
    void UpdateClock();
    void changeEvent(QEvent *event);
private slots:
    //void on_pushButton_clicked();
    // void on_label_linkActivated(const QString &link);
    void on_commandLinkButton_clicked();
    // void managerFinished(QNetworkReply *reply);
    void on_chbx_fagr_stateChanged(int arg1);
    //void on_groupBox_clicked();
    void on_chbx_asha_stateChanged(int arg1);
    void on_chbx_dohr_stateChanged(int arg1);
    void on_chbx_asr_stateChanged(int arg1);
    void on_chbx_mghrb_stateChanged(int arg1);
    void iconActivated(QSystemTrayIcon::ActivationReason reason);
private:
    Ui::MainWindow *ui;
    QNetworkAccessManager *manager;
    QNetworkRequest request;
    QTimer *timer;
    QSystemTrayIcon         * trayIcon;

};
#endif // MAINWINDOW_H
