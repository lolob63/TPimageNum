#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QInputDialog>
#include <QFileDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionEntrer_un_entier_triggered()
{
    int i = QInputDialog::getInt(this, "Valeur", "Entrez un entier", 0 );
    QString br;
    br.sprintf("Vous avez entré un entier: %d", i);
    ui->textEdithistorique->append(br);

}

void MainWindow::on_actionEntrer_un_double_triggered()
{
    double j =  QInputDialog::getDouble(this, "Valeur", "Entrez un réel", 3.14159);
    QString br;
    br.sprintf("Vous avez entré un double: %lf", j);
    ui->textEdithistorique->append(br);
}

void MainWindow::on_actionEntrer_un_mot_de_passe_triggered()
{
    QString psw = QInputDialog::getText(this, "Valeur", "Entrez votre mot de passe", QLineEdit::Password, 0 );
    ui->textEdithistorique->append("Votre mot de passe: "+ psw);
}

void MainWindow::on_actionEntrer_un_texte_triggered()
{
    QString str = QInputDialog::getText(this, "Valeur", "Entrez votre nom", QLineEdit::Normal, 0 );
    ui->textEdithistorique->append("Votre nom : " + str);

}

void MainWindow::on_actionEntrer_un_item_pr_d_fini_triggered()
{
    QString taille = QInputDialog::getItem(this, "Taille", "vous êtes ?", QStringList()<<"petit"<<"moyen"<<"grand"<<"très grand",1);
    ui->textEdithistorique->append("vous êtes plutôt "+ taille);
}

void MainWindow::on_actionChoisir_un_r_pertoire_triggered()
{
    QString path = getenv("HOME");
    path = QFileDialog::getExistingDirectory(this, "répertoire de travail", path);
    ui->textEdithistorique->append("Vous avez choisi de travailler dans "+path);

}

void MainWindow::on_actionChoisir_un_fichier_triggered()
{
    QString path = getenv("HOME")+QString("/Bureau");
    QString fileName = QFileDialog::getOpenFileName(this, "Ouvrir", path);
    ui->textEdithistorique->append(fileName);
}

void MainWindow::on_actionAvertissement_triggered()
{
    QMessageBox::information(this, "Attention", "Même si les choses parraissent simples, elle ne le sont pas tout à fait");
}

void MainWindow::on_actionInformation_triggered()
{
    int rep = QMessageBox::question(this, "Une question", "Etes vous sûr d'avoir bien tout compris ?", QMessageBox::Yes | QMessageBox::No);
    ui->textEdithistorique->append( rep == QMessageBox::Yes ? "vous avez tout compris, tant mieux" : "Appellez vite le prof!");
}

void MainWindow::on_actionErreur_triggered()
{
    QMessageBox::critical(this, " Erreur fatale", "Ouille ouille ouille, il s'est passé quelque chose de pas très bon");
    this->setCursor(Qt::WaitCursor);
}

void MainWindow::on_actionChoisir_un_fichier_contenant_une_image_triggered()
{
    QString path = getenv("HOME")+QString("/Bureau");
    QString fileName = QFileDialog::getOpenFileName(this, "Ouvrir l'image", path, "*.jpg | *.jpeg | *.png | *.bmp");
    ui->textEdithistorique->append("Vous avez choisi l'image :" + fileName);
}
