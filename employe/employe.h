#ifndef EMPLOYE_H
#define EMPLOYE_H
#include "employec.h"
#include <QWidget>
#include <QtCore>
#include <QtGui>
#include <QtCharts>
#include <QPieSeries>
#include <QSerialPort>
#include <QSerialPortInfo>

QT_BEGIN_NAMESPACE
namespace Ui { class employe; }
QT_END_NAMESPACE

class employe : public QWidget
{
    Q_OBJECT

public:
    employe(QWidget *parent = nullptr);
    ~employe();
    void exportToPdf();
    void readKeypadInput();


private slots:
    void on_ajout_clicked();
    void clearFields();


    void on_afficher_clicked();

    void on_modif_clicked();
    QString isCodeExists(const int code);

    void on_supprimer_clicked();

    void on_rech_clicked();

    void on_tabWidget_2_currentChanged(int index);

    void on_tabWidget_2_tabBarClicked(int index);

    void on_exporter_clicked();

    void on_tri_clicked();

    void on_tri_nom_clicked();

    void on_tri_statut_clicked();

    void on_tri_salaire_clicked();

    void on_tri_poste_clicked();

    void on_tri_diplome_clicked();

    void on_tri_points_clicked();

    void on_tri_conge_clicked();

private:
    Ui::employe *ui;
    employec Ptmp;
    employec e;
    QSerialPort *arduino;
    QString arduinoportname;
    bool arduinoIsAvailable;


};
#endif // EMPLOYE_H
