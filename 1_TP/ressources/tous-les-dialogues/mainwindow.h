#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_actionEntrer_un_entier_triggered();

    void on_actionEntrer_un_double_triggered();

    void on_actionEntrer_un_mot_de_passe_triggered();

    void on_actionEntrer_un_texte_triggered();

    void on_actionEntrer_un_item_pr_d_fini_triggered();

    void on_actionChoisir_un_r_pertoire_triggered();

    void on_actionChoisir_un_fichier_triggered();

    void on_actionAvertissement_triggered();

    void on_actionInformation_triggered();

    void on_actionErreur_triggered();

    void on_actionChoisir_un_fichier_contenant_une_image_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
