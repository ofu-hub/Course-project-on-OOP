/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_AC;
    QAction *action_Exit;
    QAction *action_Author;
    QAction *action_Info;
    QAction *action_ChangeOutput;
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *pushButton_ch9;
    QPushButton *pushButton_ch5;
    QPushButton *pushButton_ch1;
    QPushButton *pushButton_ch3;
    QPushButton *pushButton_chC;
    QPushButton *pushButton_ch0;
    QPushButton *pushButton_ch8;
    QPushButton *pushButton_ch4;
    QPushButton *pushButton_ch2;
    QPushButton *pushButton_ch7;
    QPushButton *pushButton_ch6;
    QPushButton *pushButton_dotCH;
    QLabel *label;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_z0;
    QPushButton *pushButton_zC;
    QPushButton *pushButton_z1;
    QPushButton *pushButton_z2;
    QPushButton *pushButton_z3;
    QPushButton *pushButton_z6;
    QPushButton *pushButton_z5;
    QPushButton *pushButton_z4;
    QPushButton *pushButton_z7;
    QPushButton *pushButton_z8;
    QPushButton *pushButton_z9;
    QPushButton *pushButton_dotZ;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_C;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_div;
    QPushButton *pushButton_8;
    QPushButton *pushButton_plus_minus;
    QPushButton *pushButton_precent;
    QPushButton *pushButton_equally;
    QPushButton *pushButton_7;
    QPushButton *pushButton_3;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_AC;
    QPushButton *pushButton_2;
    QPushButton *pushButton_0;
    QPushButton *pushButton_1;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_9;
    QPushButton *pushButton_6;
    QLabel *labelZ;
    QLabel *labelCH;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(549, 567);
        MainWindow->setMinimumSize(QSize(549, 567));
        MainWindow->setMaximumSize(QSize(549, 567));
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QLatin1String("font: 8pt \"Lucida Sans Unicode\";\n"
"color: black;\n"
"background-color: white;"));
        MainWindow->setIconSize(QSize(512, 512));
        MainWindow->setDocumentMode(false);
        action_AC = new QAction(MainWindow);
        action_AC->setObjectName(QStringLiteral("action_AC"));
        action_Exit = new QAction(MainWindow);
        action_Exit->setObjectName(QStringLiteral("action_Exit"));
        action_Author = new QAction(MainWindow);
        action_Author->setObjectName(QStringLiteral("action_Author"));
        action_Info = new QAction(MainWindow);
        action_Info->setObjectName(QStringLiteral("action_Info"));
        action_ChangeOutput = new QAction(MainWindow);
        action_ChangeOutput->setObjectName(QStringLiteral("action_ChangeOutput"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(310, 80, 231, 231));
        groupBox->setStyleSheet(QLatin1String("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    margin-top: 40px;\n"
"    font-size: 14px;\n"
"    border-radius: 15px;\n"
"}\n"
"\n"
"QGroupBox::title  {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center;\n"
"    padding: 7px 1000px 7px 1000px;\n"
"}"));
        pushButton_ch9 = new QPushButton(groupBox);
        pushButton_ch9->setObjectName(QStringLiteral("pushButton_ch9"));
        pushButton_ch9->setGeometry(QRect(150, 60, 71, 41));
        QFont font;
        font.setFamily(QStringLiteral("Lucida Sans Unicode"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        pushButton_ch9->setFont(font);
        pushButton_ch9->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_ch5 = new QPushButton(groupBox);
        pushButton_ch5->setObjectName(QStringLiteral("pushButton_ch5"));
        pushButton_ch5->setGeometry(QRect(80, 100, 71, 41));
        pushButton_ch5->setFont(font);
        pushButton_ch5->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_ch1 = new QPushButton(groupBox);
        pushButton_ch1->setObjectName(QStringLiteral("pushButton_ch1"));
        pushButton_ch1->setGeometry(QRect(10, 140, 71, 41));
        pushButton_ch1->setFont(font);
        pushButton_ch1->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_ch3 = new QPushButton(groupBox);
        pushButton_ch3->setObjectName(QStringLiteral("pushButton_ch3"));
        pushButton_ch3->setGeometry(QRect(150, 140, 71, 41));
        pushButton_ch3->setFont(font);
        pushButton_ch3->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_chC = new QPushButton(groupBox);
        pushButton_chC->setObjectName(QStringLiteral("pushButton_chC"));
        pushButton_chC->setGeometry(QRect(150, 180, 71, 41));
        pushButton_chC->setFont(font);
        pushButton_chC->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_ch0 = new QPushButton(groupBox);
        pushButton_ch0->setObjectName(QStringLiteral("pushButton_ch0"));
        pushButton_ch0->setGeometry(QRect(80, 180, 71, 41));
        pushButton_ch0->setFont(font);
        pushButton_ch0->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_ch8 = new QPushButton(groupBox);
        pushButton_ch8->setObjectName(QStringLiteral("pushButton_ch8"));
        pushButton_ch8->setGeometry(QRect(80, 60, 71, 41));
        pushButton_ch8->setFont(font);
        pushButton_ch8->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_ch4 = new QPushButton(groupBox);
        pushButton_ch4->setObjectName(QStringLiteral("pushButton_ch4"));
        pushButton_ch4->setGeometry(QRect(10, 100, 71, 41));
        pushButton_ch4->setFont(font);
        pushButton_ch4->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_ch2 = new QPushButton(groupBox);
        pushButton_ch2->setObjectName(QStringLiteral("pushButton_ch2"));
        pushButton_ch2->setGeometry(QRect(80, 140, 71, 41));
        pushButton_ch2->setFont(font);
        pushButton_ch2->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_ch7 = new QPushButton(groupBox);
        pushButton_ch7->setObjectName(QStringLiteral("pushButton_ch7"));
        pushButton_ch7->setGeometry(QRect(10, 60, 71, 41));
        pushButton_ch7->setFont(font);
        pushButton_ch7->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_ch6 = new QPushButton(groupBox);
        pushButton_ch6->setObjectName(QStringLiteral("pushButton_ch6"));
        pushButton_ch6->setGeometry(QRect(150, 100, 71, 41));
        pushButton_ch6->setFont(font);
        pushButton_ch6->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_dotCH = new QPushButton(groupBox);
        pushButton_dotCH->setObjectName(QStringLiteral("pushButton_dotCH"));
        pushButton_dotCH->setGeometry(QRect(10, 180, 71, 41));
        pushButton_dotCH->setFont(font);
        pushButton_dotCH->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(10, 0, 531, 71));
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QLatin1String("QLabel {\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	font-size: 36px;\n"
"	border-bottom: 1px solid gray;\n"
"}\n"
""));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(310, 310, 231, 231));
        groupBox_2->setStyleSheet(QLatin1String("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    margin-top: 40px;\n"
"    font-size: 14px;\n"
"    border-radius: 15px;\n"
"}\n"
"\n"
"QGroupBox::title  {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center;\n"
"    padding: 7px 1000px 7px 1000px;\n"
"}"));
        pushButton_z0 = new QPushButton(groupBox_2);
        pushButton_z0->setObjectName(QStringLiteral("pushButton_z0"));
        pushButton_z0->setGeometry(QRect(80, 180, 71, 41));
        pushButton_z0->setFont(font);
        pushButton_z0->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_zC = new QPushButton(groupBox_2);
        pushButton_zC->setObjectName(QStringLiteral("pushButton_zC"));
        pushButton_zC->setGeometry(QRect(150, 180, 71, 41));
        pushButton_zC->setFont(font);
        pushButton_zC->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_z1 = new QPushButton(groupBox_2);
        pushButton_z1->setObjectName(QStringLiteral("pushButton_z1"));
        pushButton_z1->setGeometry(QRect(10, 140, 71, 41));
        pushButton_z1->setFont(font);
        pushButton_z1->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_z2 = new QPushButton(groupBox_2);
        pushButton_z2->setObjectName(QStringLiteral("pushButton_z2"));
        pushButton_z2->setGeometry(QRect(80, 140, 71, 41));
        pushButton_z2->setFont(font);
        pushButton_z2->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_z3 = new QPushButton(groupBox_2);
        pushButton_z3->setObjectName(QStringLiteral("pushButton_z3"));
        pushButton_z3->setGeometry(QRect(150, 140, 71, 41));
        pushButton_z3->setFont(font);
        pushButton_z3->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_z6 = new QPushButton(groupBox_2);
        pushButton_z6->setObjectName(QStringLiteral("pushButton_z6"));
        pushButton_z6->setGeometry(QRect(150, 100, 71, 41));
        pushButton_z6->setFont(font);
        pushButton_z6->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_z5 = new QPushButton(groupBox_2);
        pushButton_z5->setObjectName(QStringLiteral("pushButton_z5"));
        pushButton_z5->setGeometry(QRect(80, 100, 71, 41));
        pushButton_z5->setFont(font);
        pushButton_z5->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_z4 = new QPushButton(groupBox_2);
        pushButton_z4->setObjectName(QStringLiteral("pushButton_z4"));
        pushButton_z4->setGeometry(QRect(10, 100, 71, 41));
        pushButton_z4->setFont(font);
        pushButton_z4->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_z7 = new QPushButton(groupBox_2);
        pushButton_z7->setObjectName(QStringLiteral("pushButton_z7"));
        pushButton_z7->setGeometry(QRect(10, 60, 71, 41));
        pushButton_z7->setFont(font);
        pushButton_z7->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_z8 = new QPushButton(groupBox_2);
        pushButton_z8->setObjectName(QStringLiteral("pushButton_z8"));
        pushButton_z8->setGeometry(QRect(80, 60, 71, 41));
        pushButton_z8->setFont(font);
        pushButton_z8->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_z9 = new QPushButton(groupBox_2);
        pushButton_z9->setObjectName(QStringLiteral("pushButton_z9"));
        pushButton_z9->setGeometry(QRect(150, 60, 71, 41));
        pushButton_z9->setFont(font);
        pushButton_z9->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_dotZ = new QPushButton(groupBox_2);
        pushButton_dotZ->setObjectName(QStringLiteral("pushButton_dotZ"));
        pushButton_dotZ->setGeometry(QRect(10, 180, 71, 41));
        pushButton_dotZ->setFont(font);
        pushButton_dotZ->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(9, 80, 301, 461));
        groupBox_3->setStyleSheet(QLatin1String("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    margin-top: 40px;\n"
"    font-size: 14px;\n"
"    border-radius: 15px;\n"
"}\n"
"\n"
"QGroupBox::title  {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center;\n"
"    padding: 7px 1000px 7px 1000px;\n"
"}"));
        pushButton_C = new QPushButton(groupBox_3);
        pushButton_C->setObjectName(QStringLiteral("pushButton_C"));
        pushButton_C->setGeometry(QRect(220, 90, 71, 61));
        pushButton_C->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	background-color:rgb(203, 203, 203);\n"
"	border: 1px solid gray;\n"
"	font-size: 16px;\n"
"	border-radius: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(53, 53, 53);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_mul = new QPushButton(groupBox_3);
        pushButton_mul->setObjectName(QStringLiteral("pushButton_mul"));
        pushButton_mul->setGeometry(QRect(220, 210, 71, 61));
        pushButton_mul->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: rgb(35, 35, 35);\n"
"	background-color:rgb(255, 166, 42);\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(53, 53, 53);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_div = new QPushButton(groupBox_3);
        pushButton_div->setObjectName(QStringLiteral("pushButton_div"));
        pushButton_div->setGeometry(QRect(220, 150, 71, 61));
        pushButton_div->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: rgb(35, 35, 35);\n"
"	background-color:rgb(255, 166, 42);\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(53, 53, 53);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_8 = new QPushButton(groupBox_3);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(80, 210, 71, 61));
        pushButton_8->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_plus_minus = new QPushButton(groupBox_3);
        pushButton_plus_minus->setObjectName(QStringLiteral("pushButton_plus_minus"));
        pushButton_plus_minus->setGeometry(QRect(10, 150, 106, 61));
        pushButton_plus_minus->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	background-color:rgb(203, 203, 203);\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(53, 53, 53);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_precent = new QPushButton(groupBox_3);
        pushButton_precent->setObjectName(QStringLiteral("pushButton_precent"));
        pushButton_precent->setGeometry(QRect(115, 150, 106, 61));
        pushButton_precent->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	background-color:rgb(203, 203, 203);\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(53, 53, 53);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_equally = new QPushButton(groupBox_3);
        pushButton_equally->setObjectName(QStringLiteral("pushButton_equally"));
        pushButton_equally->setGeometry(QRect(220, 390, 71, 61));
        pushButton_equally->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: rgb(35, 35, 35);\n"
"	background-color:rgb(255, 166, 42);\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(53, 53, 53);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_7 = new QPushButton(groupBox_3);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 210, 71, 61));
        pushButton_7->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(150, 330, 71, 61));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_minus = new QPushButton(groupBox_3);
        pushButton_minus->setObjectName(QStringLiteral("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(220, 330, 71, 61));
        pushButton_minus->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: rgb(35, 35, 35);\n"
"	background-color:rgb(255, 166, 42);\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(53, 53, 53);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_AC = new QPushButton(groupBox_3);
        pushButton_AC->setObjectName(QStringLiteral("pushButton_AC"));
        pushButton_AC->setGeometry(QRect(10, 90, 71, 61));
        pushButton_AC->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	background-color:rgb(203, 203, 203);\n"
"	border: 1px solid gray;\n"
"	font-size: 16px;\n"
"	border-radius: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(53, 53, 53);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_2 = new QPushButton(groupBox_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 330, 71, 61));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_0 = new QPushButton(groupBox_3);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setGeometry(QRect(10, 390, 141, 61));
        pushButton_0->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_0->setAutoDefault(false);
        pushButton_1 = new QPushButton(groupBox_3);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(10, 330, 71, 61));
        pushButton_1->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_4 = new QPushButton(groupBox_3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 270, 71, 61));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_5 = new QPushButton(groupBox_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(80, 270, 71, 61));
        pushButton_5->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_dot = new QPushButton(groupBox_3);
        pushButton_dot->setObjectName(QStringLiteral("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(150, 390, 71, 61));
        pushButton_dot->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_plus = new QPushButton(groupBox_3);
        pushButton_plus->setObjectName(QStringLiteral("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(220, 270, 71, 61));
        pushButton_plus->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: rgb(35, 35, 35);\n"
"	background-color:rgb(255, 166, 42);\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(53, 53, 53);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_9 = new QPushButton(groupBox_3);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(150, 210, 71, 61));
        pushButton_9->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        pushButton_6 = new QPushButton(groupBox_3);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(150, 270, 71, 61));
        pushButton_6->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: black;\n"
"	border: 1px solid gray;\n"
"	border-radius: 2px;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius: 2px;\n"
"}"));
        labelZ = new QLabel(centralwidget);
        labelZ->setObjectName(QStringLiteral("labelZ"));
        labelZ->setEnabled(false);
        labelZ->setGeometry(QRect(460, 30, 81, 41));
        labelZ->setStyleSheet(QLatin1String("QLabel {\n"
"	font-size: 12px;\n"
"	border-bottom: 1px solid gray;\n"
"}\n"
""));
        labelZ->setAlignment(Qt::AlignCenter);
        labelCH = new QLabel(centralwidget);
        labelCH->setObjectName(QStringLiteral("labelCH"));
        labelCH->setEnabled(false);
        labelCH->setGeometry(QRect(460, 5, 81, 31));
        labelCH->setStyleSheet(QLatin1String("QLabel {\n"
"	font-size: 12px;\n"
"	border-bottom: 1px solid black;\n"
"}\n"
""));
        labelCH->setTextFormat(Qt::AutoText);
        labelCH->setAlignment(Qt::AlignCenter);
        labelCH->setWordWrap(false);
        MainWindow->setCentralWidget(centralwidget);
        groupBox->raise();
        groupBox_2->raise();
        groupBox_3->raise();
        labelZ->raise();
        labelCH->raise();
        label->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 549, 21));
        menubar->setStyleSheet(QStringLiteral(""));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        menu->setStyleSheet(QStringLiteral(""));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(action_ChangeOutput);
        menu->addAction(action_AC);
        menu->addSeparator();
        menu->addAction(action_Exit);
        menu_2->addAction(action_Author);
        menu_2->addAction(action_Info);

        retranslateUi(MainWindow);

        pushButton_0->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200 \320\264\321\200\320\276\320\261\320\275\321\213\321\205 \321\207\320\270\321\201\320\265\320\273", Q_NULLPTR));
        action_AC->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\277\320\276\320\273\320\265 \320\262\321\213\320\262\320\276\320\264\320\260", Q_NULLPTR));
        action_Exit->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", Q_NULLPTR));
        action_Author->setText(QApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200", Q_NULLPTR));
        action_Info->setText(QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", Q_NULLPTR));
        action_ChangeOutput->setText(QApplication::translate("MainWindow", "\320\241\320\274\320\265\320\275\320\270\321\202\321\214 \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\262\321\213\320\262\320\276\320\264\320\260", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\270\321\202\320\265\320\273\321\214", Q_NULLPTR));
        pushButton_ch9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        pushButton_ch5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        pushButton_ch1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        pushButton_ch3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        pushButton_chC->setText(QApplication::translate("MainWindow", "\342\214\253", Q_NULLPTR));
        pushButton_ch0->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        pushButton_ch8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        pushButton_ch4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        pushButton_ch2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        pushButton_ch7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        pushButton_ch6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        pushButton_dotCH->setText(QApplication::translate("MainWindow", ",", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\320\227\320\275\320\260\320\274\320\265\320\275\320\260\321\202\320\265\320\273\321\214", Q_NULLPTR));
        pushButton_z0->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        pushButton_zC->setText(QApplication::translate("MainWindow", "\342\214\253", Q_NULLPTR));
        pushButton_z1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        pushButton_z2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        pushButton_z3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        pushButton_z6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        pushButton_z5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        pushButton_z4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        pushButton_z7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        pushButton_z8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        pushButton_z9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        pushButton_dotZ->setText(QApplication::translate("MainWindow", ",", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\320\246\320\265\320\273\321\213\320\265 \321\207\320\270\321\201\320\273\320\260", Q_NULLPTR));
        pushButton_C->setText(QApplication::translate("MainWindow", "\342\214\253", Q_NULLPTR));
        pushButton_mul->setText(QApplication::translate("MainWindow", "\303\227", Q_NULLPTR));
        pushButton_div->setText(QApplication::translate("MainWindow", "\303\267", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        pushButton_plus_minus->setText(QApplication::translate("MainWindow", "\302\261", Q_NULLPTR));
        pushButton_precent->setText(QApplication::translate("MainWindow", "%", Q_NULLPTR));
        pushButton_equally->setText(QApplication::translate("MainWindow", "=", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        pushButton_minus->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        pushButton_AC->setText(QApplication::translate("MainWindow", "AC", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        pushButton_0->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        pushButton_1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        pushButton_dot->setText(QApplication::translate("MainWindow", ",", Q_NULLPTR));
        pushButton_plus->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        labelZ->setText(QString());
        labelCH->setText(QString());
        menu->setTitle(QApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
