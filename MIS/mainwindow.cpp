#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"stor1.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_5_clicked()  //仓库1的展开
{
    this->close();
    stor1* s1=new stor1;
    s1->show();
}
void MainWindow::on_stor1_clicked()  //仓库一的展开
{
    this->close();
    stor1* s1=new stor1;
    s1->show();

}

void MainWindow::on_stor2_clicked()
{
    this->close();
    stor1 *s2=new stor1;
    s2->show();
}
