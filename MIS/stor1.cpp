#include "stor1.h"
#include "ui_stor1.h"
#include "mainwindow.h"

stor1::stor1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stor1)
{
    ui->setupUi(this);
}

stor1::~stor1()
{
    delete ui;
}

void stor1::on_pushButton_clicked()
{
    this->close();
    MainWindow *W=new MainWindow;
    W->show();
}
