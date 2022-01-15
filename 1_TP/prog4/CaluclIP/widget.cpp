#include "widget.h"
#include "ui_widget.h"
#include "ipv4.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    setFixedSize(400,450);  //fixe la taille de la fenêtre
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButtonCalcul_clicked()
{
    unsigned char adresse[4]={192,168,1,1};
    unsigned char masque[4];
    unsigned char masqueCIDR;
    unsigned char reseau[4];
    unsigned char adressemini[4];
    unsigned char adressemaxi[4];
    unsigned char diffusion[4];
    char text[100];
     adresse[3]= ui->spinBoxIP0->value();
     adresse[2]= ui->spinBoxIP1->value();
     adresse[1]= ui->spinBoxIP2->value();
     adresse[0]= ui->spinBoxIP3->value();
     masqueCIDR= ui->spinBoxMasque->value();
     IPv4 uneAdresse(adresse,masqueCIDR);

     uneAdresse.ObtenirMasque(masque); //appel d'une méthode
     sprintf(text,"Masque: %i - %i - %i - %i",masque[0],masque[1],masque[2],masque[3]);
     ui->label_Masque->setText(text);

     uneAdresse.ObtenirAdresseReseau(reseau);
     sprintf(text,"Adresse réseau: %i - %i - %i - %i",reseau[0],reseau[1],masque[2],reseau[3]);
     ui->label_Reseau->setText(text);

     uneAdresse.ObtenirAdresseDiffusion(diffusion);
     sprintf(text,"Adresse de diffusion: %i - %i - %i - %i",diffusion[0],diffusion[1],diffusion[2],diffusion[3]);
     ui->label_Diffusion->setText(text);

     uneAdresse.ObtenirAdresseMini(adressemini);
     sprintf(text,"Adresse IP mini: %i - %i - %i - %i",adressemini[0],adressemini[1],adressemini[2],adressemini[3]);
     ui->label_IPmini->setText(text);

     uneAdresse.ObtenirAdresseMaxi(adressemaxi);
     sprintf(text,"Adresse IP mini: %i - %i - %i - %i",adressemaxi[0],adressemaxi[1],adressemaxi[2],adressemaxi[3]);
     ui->label_IPmaxi->setText(text);

     sprintf(text,"Nombre des adresses IP: %i",int(uneAdresse.ObtenirNbre(masque)));
     ui->label_Nbre->setText(text);
}
