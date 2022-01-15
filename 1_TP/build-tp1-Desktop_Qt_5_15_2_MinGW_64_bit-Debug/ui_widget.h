/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButtonHomme;
    QRadioButton *radioButtonFemme;
    QLabel *labelNom;
    QLineEdit *lineEditPrenom;
    QLabel *labelPoids;
    QLabel *labelSexe;
    QLineEdit *lineEditNom;
    QLabel *labelTaille;
    QPushButton *pushButtonSuite;
    QLabel *labelPrenom;
    QLabel *labelAge;
    QDoubleSpinBox *doubleSpinBoxPoids;
    QSpinBox *spinBoxAge;
    QDoubleSpinBox *doubleSpinBoxTaille;
    QWidget *tab_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEditAfficheur;
    QPushButton *pushButtonDevine;
    QPushButton *pushButtonLorenz;
    QPushButton *pushButtonLorenzAge;
    QPushButton *pushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(451, 398);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        Widget->setAcceptDrops(false);
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(0, 0, 451, 351));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayoutWidget = new QWidget(tab);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(40, 30, 371, 271));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioButtonHomme = new QRadioButton(gridLayoutWidget);
        radioButtonHomme->setObjectName(QString::fromUtf8("radioButtonHomme"));

        horizontalLayout->addWidget(radioButtonHomme);

        radioButtonFemme = new QRadioButton(gridLayoutWidget);
        radioButtonFemme->setObjectName(QString::fromUtf8("radioButtonFemme"));

        horizontalLayout->addWidget(radioButtonFemme);


        gridLayout->addLayout(horizontalLayout, 2, 2, 1, 1);

        labelNom = new QLabel(gridLayoutWidget);
        labelNom->setObjectName(QString::fromUtf8("labelNom"));

        gridLayout->addWidget(labelNom, 0, 0, 1, 1);

        lineEditPrenom = new QLineEdit(gridLayoutWidget);
        lineEditPrenom->setObjectName(QString::fromUtf8("lineEditPrenom"));

        gridLayout->addWidget(lineEditPrenom, 1, 2, 1, 1);

        labelPoids = new QLabel(gridLayoutWidget);
        labelPoids->setObjectName(QString::fromUtf8("labelPoids"));

        gridLayout->addWidget(labelPoids, 3, 0, 1, 1);

        labelSexe = new QLabel(gridLayoutWidget);
        labelSexe->setObjectName(QString::fromUtf8("labelSexe"));

        gridLayout->addWidget(labelSexe, 2, 0, 1, 1);

        lineEditNom = new QLineEdit(gridLayoutWidget);
        lineEditNom->setObjectName(QString::fromUtf8("lineEditNom"));

        gridLayout->addWidget(lineEditNom, 0, 2, 1, 1);

        labelTaille = new QLabel(gridLayoutWidget);
        labelTaille->setObjectName(QString::fromUtf8("labelTaille"));

        gridLayout->addWidget(labelTaille, 4, 0, 1, 1);

        pushButtonSuite = new QPushButton(gridLayoutWidget);
        pushButtonSuite->setObjectName(QString::fromUtf8("pushButtonSuite"));

        gridLayout->addWidget(pushButtonSuite, 6, 2, 1, 1);

        labelPrenom = new QLabel(gridLayoutWidget);
        labelPrenom->setObjectName(QString::fromUtf8("labelPrenom"));

        gridLayout->addWidget(labelPrenom, 1, 0, 1, 1);

        labelAge = new QLabel(gridLayoutWidget);
        labelAge->setObjectName(QString::fromUtf8("labelAge"));

        gridLayout->addWidget(labelAge, 5, 0, 1, 1);

        doubleSpinBoxPoids = new QDoubleSpinBox(gridLayoutWidget);
        doubleSpinBoxPoids->setObjectName(QString::fromUtf8("doubleSpinBoxPoids"));

        gridLayout->addWidget(doubleSpinBoxPoids, 3, 2, 1, 1);

        spinBoxAge = new QSpinBox(gridLayoutWidget);
        spinBoxAge->setObjectName(QString::fromUtf8("spinBoxAge"));

        gridLayout->addWidget(spinBoxAge, 5, 2, 1, 1);

        doubleSpinBoxTaille = new QDoubleSpinBox(gridLayoutWidget);
        doubleSpinBoxTaille->setObjectName(QString::fromUtf8("doubleSpinBoxTaille"));

        gridLayout->addWidget(doubleSpinBoxTaille, 4, 2, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayoutWidget = new QWidget(tab_2);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(60, 50, 317, 196));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        textEditAfficheur = new QTextEdit(verticalLayoutWidget);
        textEditAfficheur->setObjectName(QString::fromUtf8("textEditAfficheur"));

        verticalLayout_2->addWidget(textEditAfficheur);

        pushButtonDevine = new QPushButton(verticalLayoutWidget);
        pushButtonDevine->setObjectName(QString::fromUtf8("pushButtonDevine"));

        verticalLayout_2->addWidget(pushButtonDevine);

        pushButtonLorenz = new QPushButton(verticalLayoutWidget);
        pushButtonLorenz->setObjectName(QString::fromUtf8("pushButtonLorenz"));

        verticalLayout_2->addWidget(pushButtonLorenz);

        pushButtonLorenzAge = new QPushButton(verticalLayoutWidget);
        pushButtonLorenzAge->setObjectName(QString::fromUtf8("pushButtonLorenzAge"));

        verticalLayout_2->addWidget(pushButtonLorenzAge);


        verticalLayout->addLayout(verticalLayout_2);

        tabWidget->addTab(tab_2, QString());
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 370, 93, 28));

        retranslateUi(Widget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        radioButtonHomme->setText(QCoreApplication::translate("Widget", "Homme", nullptr));
        radioButtonFemme->setText(QCoreApplication::translate("Widget", "Femme", nullptr));
        labelNom->setText(QCoreApplication::translate("Widget", "Nom", nullptr));
        labelPoids->setText(QCoreApplication::translate("Widget", "Poids (kg)", nullptr));
        labelSexe->setText(QCoreApplication::translate("Widget", "Sexe", nullptr));
        labelTaille->setText(QCoreApplication::translate("Widget", "Taille (m)", nullptr));
        pushButtonSuite->setText(QCoreApplication::translate("Widget", "Suite", nullptr));
        labelPrenom->setText(QCoreApplication::translate("Widget", "Pr\303\251nom", nullptr));
        labelAge->setText(QCoreApplication::translate("Widget", "Age", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Widget", "Informations personnelles", nullptr));
        pushButtonDevine->setText(QCoreApplication::translate("Widget", "Poids id\303\251ale, formule de Devine ", nullptr));
        pushButtonLorenz->setText(QCoreApplication::translate("Widget", "Poids id\303\251ale, formule de Lorenz", nullptr));
        pushButtonLorenzAge->setText(QCoreApplication::translate("Widget", "Poids id\303\251ale, formule de Lorentz en fonction de l'age.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Widget", "Calcul du poids id\303\251al", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
