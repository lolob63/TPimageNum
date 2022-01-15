#include "IPv4.h"
#include <cmath>
using namespace std;
IPv4::IPv4(const unsigned char * _adresse,const unsigned char _cidr)
{
    adresse = new unsigned char[4];
    masque = new unsigned char[4];
    for(int indice=0;indice<4;indice++)
        adresse[indice]= _adresse[indice];
    if(_cidr<=32)
        CalculerMasque(_cidr);
    }

IPv4::IPv4(const unsigned char*_adresse,const unsigned char * _masque)
{
        adresse = new unsigned char[4];
        masque=new unsigned char[4];
        for(int indice=0;indice<4;indice++)
        {
                adresse[indice]=_adresse[indice];
                masque[indice]=_masque[indice];
        }
    }

IPv4::~IPv4()
{
    delete [] adresse;
    delete [] masque;
    }

void IPv4::CalculerMasque(unsigned char _cidr)
{
    int indice;

    //Le masque est remis à 0->0.0.0.0
    for(indice=0;indice<4;indice++)
        masque[indice]=0;

    indice=0;

    //tant que le cidr est un multiple de 8
    while(_cidr>=8)
        {
            masque[indice++]=255;
            _cidr-=8;
        }

    //Complément pour la fin du cidr (<8)
    unsigned char puissance=128;
    while(_cidr-->0)
        //Après le test la variable _cidr est décrémentée
    {
        //les puissances de 2 sont ajoutées ŕ l'octet par valeur décroissante
        masque[indice]+=puissance;
        puissance/=2;
    }
}

void IPv4::ObtenirMasque(unsigned char * _masque)
{
    for(int indice=0;indice<4;indice++)
        _masque[indice]=masque[indice];
}

void IPv4::ObtenirAdresseReseau(unsigned char * _reseau)
{
    for(int indice=0;indice<4;indice++)
        _reseau[indice]=adresse[indice]&masque[indice];
}
void IPv4::ObtenirAdresseDiffusion(unsigned char *_diffusion)
{
    unsigned char adresseDuReseau[4];
    ObtenirAdresseReseau(adresseDuReseau);
    for(int indice=0;indice<4;indice++)
        _diffusion[indice]=adresseDuReseau[indice]|~masque[indice];
}


void IPv4::ObtenirAdresseMini(unsigned char * _adressemini)
{
     unsigned char adresseDuReseau[4];
     ObtenirAdresseReseau(adresseDuReseau);
     for(int indice=0;indice<4;indice++)
         _adressemini[indice]=adresse[indice]&masque[indice];
     _adressemini[3] =_adressemini[3]+1;

}

void IPv4::ObtenirAdresseMaxi(unsigned char * _adressemaxi)
{
     unsigned char adresseDuReseau[4];
     ObtenirAdresseDiffusion(adresseDuReseau);
     for(int indice=0;indice<4;indice++)
         _adressemaxi[indice]=adresseDuReseau[indice]|~masque[indice];
     _adressemaxi[3] = _adressemaxi[3]-1;

}

double IPv4::ObtenirNbre(unsigned char * _masque)
{
    ObtenirMasque(masque);
    unsigned char cidr=0;
    unsigned char m=1;

    for (int i=0; i<4;i++)
    {
        for (int j= 0; j<8;j++){
            if ((masque[i] & m )==0)
            {
                cidr++;
            }
            m=m<<1;
        }
      m=1;
      }
    return pow(2,cidr)-2;   // (2 puissance cidr ) -2
}
