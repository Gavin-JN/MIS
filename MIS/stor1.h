#ifndef STOR1_H
#define STOR1_H

#include <QDialog>

namespace Ui {
class stor1;
}

class stor1 : public QDialog
{
    Q_OBJECT

public:
    explicit stor1(QWidget *parent = nullptr);
    ~stor1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::stor1 *ui;
};

#endif // STOR1_H
