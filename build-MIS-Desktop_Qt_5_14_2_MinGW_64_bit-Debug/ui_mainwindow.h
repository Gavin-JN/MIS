/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *stor1;
    QPushButton *stor2;
    QPushButton *stor3;
    QPushButton *stor4;
    QPushButton *stor5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(2600, 1700);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 459, 350, 137));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(48);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 732, 350, 137));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(0, 1022, 350, 137));
        pushButton_3->setFont(font);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 1295, 350, 137));
        pushButton_4->setFont(font);
        stor1 = new QPushButton(centralwidget);
        stor1->setObjectName(QString::fromUtf8("stor1"));
        stor1->setGeometry(QRect(566, 298, 420, 420));
        stor1->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/D:/Word/ph1(1)(1).png);\n"
"border:none;\n"
""));
        stor2 = new QPushButton(centralwidget);
        stor2->setObjectName(QString::fromUtf8("stor2"));
        stor2->setGeometry(QRect(1188, 294, 412, 412));
        stor2->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/D:/Word/ph1(1)(1).png);\n"
"border:none;\n"
""));
        stor3 = new QPushButton(centralwidget);
        stor3->setObjectName(QString::fromUtf8("stor3"));
        stor3->setGeometry(QRect(1787, 291, 412, 412));
        stor3->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/D:/Word/ph1(1)(1).png);\n"
"border:none;\n"
""));
        stor4 = new QPushButton(centralwidget);
        stor4->setObjectName(QString::fromUtf8("stor4"));
        stor4->setGeometry(QRect(587, 956, 412, 412));
        stor4->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/D:/Word/ph1(1)(1).png);\n"
"border:none;\n"
""));
        stor5 = new QPushButton(centralwidget);
        stor5->setObjectName(QString::fromUtf8("stor5"));
        stor5->setGeometry(QRect(1188, 959, 412, 412));
        stor5->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/D:/Word/ph1(1)(1).png);\n"
"border:none;\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 2600, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\344\273\223\345\272\223", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\345\210\251\346\266\246", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\346\212\245\350\241\250", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\345\273\272\350\256\256", nullptr));
        stor1->setText(QString());
        stor2->setText(QString());
        stor3->setText(QString());
        stor4->setText(QString());
        stor5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
