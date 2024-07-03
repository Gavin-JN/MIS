/********************************************************************************
** Form generated from reading UI file 'stor1.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOR1_H
#define UI_STOR1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_stor1
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *stor1)
    {
        if (stor1->objectName().isEmpty())
            stor1->setObjectName(QString::fromUtf8("stor1"));
        stor1->resize(2600, 1700);
        pushButton = new QPushButton(stor1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, -10, 171, 171));
        pushButton->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/D:/Word/return.png);"));

        retranslateUi(stor1);

        QMetaObject::connectSlotsByName(stor1);
    } // setupUi

    void retranslateUi(QDialog *stor1)
    {
        stor1->setWindowTitle(QCoreApplication::translate("stor1", "Dialog", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class stor1: public Ui_stor1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOR1_H
