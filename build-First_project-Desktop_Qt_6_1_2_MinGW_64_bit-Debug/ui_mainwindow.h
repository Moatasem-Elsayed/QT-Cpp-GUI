/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionMinmize;
    QAction *actionClose;
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QCheckBox *chbx_fagr;
    QCheckBox *chbx_dohr;
    QCheckBox *chbx_asr;
    QCheckBox *chbx_mghrb;
    QCheckBox *chbx_asha;
    QLabel *lbl_Result;
    QCommandLinkButton *commandLinkButton;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLCDNumber *lcd_fagr_9;
    QLabel *Label_fagr_9;
    QHBoxLayout *horizontalLayout_7;
    QLCDNumber *lcd_dohr;
    QLabel *Label_fagr_10;
    QHBoxLayout *horizontalLayout;
    QLCDNumber *lcd_asr;
    QLabel *Label_fagr_4;
    QHBoxLayout *horizontalLayout_4;
    QLCDNumber *lcd_fmaghrb;
    QLabel *Label_fagr_7;
    QHBoxLayout *horizontalLayout_5;
    QLCDNumber *lcd_asha;
    QLabel *Label_fagr_8;
    QComboBox *cbx_goverments;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(412, 412);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(412, 412));
        MainWindow->setMaximumSize(QSize(412, 412));
        MainWindow->setContextMenuPolicy(Qt::NoContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/prayer.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionMinmize = new QAction(MainWindow);
        actionMinmize->setObjectName(QString::fromUtf8("actionMinmize"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/img/min.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMinmize->setIcon(icon1);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rec/img/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon2);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(260, 110, 111, 201));
        groupBox->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 66, 157));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        chbx_fagr = new QCheckBox(layoutWidget);
        chbx_fagr->setObjectName(QString::fromUtf8("chbx_fagr"));

        verticalLayout->addWidget(chbx_fagr);

        chbx_dohr = new QCheckBox(layoutWidget);
        chbx_dohr->setObjectName(QString::fromUtf8("chbx_dohr"));

        verticalLayout->addWidget(chbx_dohr);

        chbx_asr = new QCheckBox(layoutWidget);
        chbx_asr->setObjectName(QString::fromUtf8("chbx_asr"));

        verticalLayout->addWidget(chbx_asr);

        chbx_mghrb = new QCheckBox(layoutWidget);
        chbx_mghrb->setObjectName(QString::fromUtf8("chbx_mghrb"));

        verticalLayout->addWidget(chbx_mghrb);

        chbx_asha = new QCheckBox(layoutWidget);
        chbx_asha->setObjectName(QString::fromUtf8("chbx_asha"));

        verticalLayout->addWidget(chbx_asha);

        lbl_Result = new QLabel(centralwidget);
        lbl_Result->setObjectName(QString::fromUtf8("lbl_Result"));
        lbl_Result->setEnabled(false);
        lbl_Result->setGeometry(QRect(120, 320, 181, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(23);
        lbl_Result->setFont(font);
        lbl_Result->setTextFormat(Qt::PlainText);
        lbl_Result->setAlignment(Qt::AlignCenter);
        commandLinkButton = new QCommandLinkButton(centralwidget);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(170, 10, 186, 49));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(15);
        commandLinkButton->setFont(font1);
        commandLinkButton->setLayoutDirection(Qt::LeftToRight);
        commandLinkButton->setAutoFillBackground(false);
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 110, 201, 187));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        lcd_fagr_9 = new QLCDNumber(layoutWidget1);
        lcd_fagr_9->setObjectName(QString::fromUtf8("lcd_fagr_9"));
        sizePolicy.setHeightForWidth(lcd_fagr_9->sizePolicy().hasHeightForWidth());
        lcd_fagr_9->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(lcd_fagr_9);

        Label_fagr_9 = new QLabel(layoutWidget1);
        Label_fagr_9->setObjectName(QString::fromUtf8("Label_fagr_9"));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(false);
        Label_fagr_9->setFont(font2);

        horizontalLayout_6->addWidget(Label_fagr_9);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        lcd_dohr = new QLCDNumber(layoutWidget1);
        lcd_dohr->setObjectName(QString::fromUtf8("lcd_dohr"));
        sizePolicy.setHeightForWidth(lcd_dohr->sizePolicy().hasHeightForWidth());
        lcd_dohr->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(lcd_dohr);

        Label_fagr_10 = new QLabel(layoutWidget1);
        Label_fagr_10->setObjectName(QString::fromUtf8("Label_fagr_10"));
        Label_fagr_10->setFont(font2);

        horizontalLayout_7->addWidget(Label_fagr_10);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lcd_asr = new QLCDNumber(layoutWidget1);
        lcd_asr->setObjectName(QString::fromUtf8("lcd_asr"));
        sizePolicy.setHeightForWidth(lcd_asr->sizePolicy().hasHeightForWidth());
        lcd_asr->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(lcd_asr);

        Label_fagr_4 = new QLabel(layoutWidget1);
        Label_fagr_4->setObjectName(QString::fromUtf8("Label_fagr_4"));
        Label_fagr_4->setFont(font2);

        horizontalLayout->addWidget(Label_fagr_4);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lcd_fmaghrb = new QLCDNumber(layoutWidget1);
        lcd_fmaghrb->setObjectName(QString::fromUtf8("lcd_fmaghrb"));
        sizePolicy.setHeightForWidth(lcd_fmaghrb->sizePolicy().hasHeightForWidth());
        lcd_fmaghrb->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(lcd_fmaghrb);

        Label_fagr_7 = new QLabel(layoutWidget1);
        Label_fagr_7->setObjectName(QString::fromUtf8("Label_fagr_7"));
        Label_fagr_7->setFont(font2);

        horizontalLayout_4->addWidget(Label_fagr_7);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lcd_asha = new QLCDNumber(layoutWidget1);
        lcd_asha->setObjectName(QString::fromUtf8("lcd_asha"));
        sizePolicy.setHeightForWidth(lcd_asha->sizePolicy().hasHeightForWidth());
        lcd_asha->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(lcd_asha);

        Label_fagr_8 = new QLabel(layoutWidget1);
        Label_fagr_8->setObjectName(QString::fromUtf8("Label_fagr_8"));
        Label_fagr_8->setFont(font2);

        horizontalLayout_5->addWidget(Label_fagr_8);


        verticalLayout_2->addLayout(horizontalLayout_5);

        cbx_goverments = new QComboBox(centralwidget);
        cbx_goverments->setObjectName(QString::fromUtf8("cbx_goverments"));
        cbx_goverments->setGeometry(QRect(21, 17, 141, 31));
        sizePolicy.setHeightForWidth(cbx_goverments->sizePolicy().hasHeightForWidth());
        cbx_goverments->setSizePolicy(sizePolicy);
        cbx_goverments->setAutoFillBackground(false);
        cbx_goverments->setMaxVisibleItems(100);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 360, 101, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Times New Roman")});
        font3.setPointSize(10);
        label->setFont(font3);
        label->setLayoutDirection(Qt::RightToLeft);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\330\245\331\204\330\247 \330\265\331\204\330\247\330\252\331\211 ", nullptr));
        actionMinmize->setText(QCoreApplication::translate("MainWindow", "Minmize", nullptr));
        actionClose->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\330\247\331\206\330\247 \330\265\331\204\331\212\330\252 \360\237\230\215", nullptr));
        chbx_fagr->setText(QCoreApplication::translate("MainWindow", "\330\247\331\204\331\201\330\254\330\261", nullptr));
        chbx_dohr->setText(QCoreApplication::translate("MainWindow", "\330\247\331\204\330\270\331\207\330\261", nullptr));
        chbx_asr->setText(QCoreApplication::translate("MainWindow", "\330\247\331\204\330\271\330\265\330\261", nullptr));
        chbx_mghrb->setText(QCoreApplication::translate("MainWindow", "\330\247\331\204\331\205\330\272\330\261\330\250", nullptr));
        chbx_asha->setText(QCoreApplication::translate("MainWindow", "\330\247\331\204\330\271\330\264\330\247\330\241", nullptr));
        lbl_Result->setText(QCoreApplication::translate("MainWindow", "\331\205\331\202\330\250\331\210\331\204", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("MainWindow", "\330\265\330\250\330\247\330\255 \330\247\331\204\330\256\331\212\330\261", nullptr));
        Label_fagr_9->setText(QCoreApplication::translate("MainWindow", "\330\247\331\204\331\201\330\254\330\261", nullptr));
        Label_fagr_10->setText(QCoreApplication::translate("MainWindow", "\330\247\331\204\330\270\331\207\330\261", nullptr));
        Label_fagr_4->setText(QCoreApplication::translate("MainWindow", "\330\247\331\204\330\271\330\265\330\261", nullptr));
        Label_fagr_7->setText(QCoreApplication::translate("MainWindow", "\330\247\331\204\331\205\330\272\330\261\330\250", nullptr));
        Label_fagr_8->setText(QCoreApplication::translate("MainWindow", "\330\247\331\204\330\271\330\264\330\247\330\241", nullptr));
#if QT_CONFIG(tooltip)
        cbx_goverments->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
