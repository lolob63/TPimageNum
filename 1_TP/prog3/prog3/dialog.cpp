#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_conversion_clicked()
{
    const double Taux= 1.21;
    double e= ui->euro->value();
    double d = e*Taux;
    ui->dollar->setValue(d);
}
