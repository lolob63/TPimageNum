#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QInputDialog>
#include <QFileDialog>
#include <QMessageBox>
#include <QImage>
#include <QPainter>
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



void MainWindow::on_actionOvrir_triggered()
{
    QString path = getenv("HOME")+QString("/Bureau");
    QString fileName = QFileDialog::getOpenFileName(this, "Ouvrir l'image", path, "*.jpg | *.jpeg | *.png | *.bmp");
    QImage image;
    image.load(fileName);
    ui->label->setText(fileName);
}
