/*
 * Programme de calcul des paramétres ip
 * Lycée La Fayette 2021
 *
 */
#include "widget.h"
#include "ipv4.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
