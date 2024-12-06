#include "employec.h"
#include<QString>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QChart>
#include <QPdfWriter>
#include <QPainter>
#include <QFont>
#include <QFontMetrics>
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QDesktopServices>
#include <QUrl>
#include <QFileDialog>







// Default constructor
employec::employec()
{
    QString ID = "";
    QString NP = "";
    QString STAT = "";
    QString SAL = "";
    QString POST = "";
    QString DIP = "";
    QString PT = "";
    QString NBC = "";
    int CODE = 0;
}

// Parameterized constructor
employec::employec(QString ID, QString NP, QString STAT, QString SAL, QString POST, QString DIP, QString PT, QString NBC,int CODE)
{
    this->ID = ID;
    this->NP = NP;
    this->STAT = STAT;
    this->SAL = SAL;
    this->POST = POST;
    this->DIP = DIP;
    this->PT = PT;
    this->NBC = NBC;
    this->CODE = CODE;
}
bool employec::ajouter_employe()
{
    // Check if all fields are filled
    if (ID.isEmpty() || NP.isEmpty() || STAT.isEmpty() || SAL.isEmpty() || POST.isEmpty() ||
        DIP.isEmpty() || PT.isEmpty() || NBC.isEmpty()) {
        QMessageBox::critical(nullptr, "Information", "Veuillez remplir tous les champs requis.");
        return false;
    }

    // Check if the ID already exists in the database
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM EMPLOYEEC WHERE ID = :ID");
    checkQuery.bindValue(":ID", ID);
    if (!checkQuery.exec()) {
        QMessageBox::critical(nullptr, "Erreur", "Erreur lors de la vérification de l'existence de l'ID de l'employé dans la base de données.");
        return false;
    }
    checkQuery.next();
    int count = checkQuery.value(0).toInt();
    if (count > 0) {
        QMessageBox::critical(nullptr, "Information", "L'ID existe déjà dans la base de données.");
        return false;
    }

    // Insert the new employee record into the database
    QSqlQuery query;
    query.prepare("INSERT INTO EMPLOYEEC(ID, NP, STAT, SAL, POST, DIP, PT, NBC,CODE) "
                  "VALUES(:ID, :NP, :STAT, :SAL, :POST, :DIP, :PT, :NBC,:CODE)");
    query.bindValue(":ID", ID);
    query.bindValue(":NP", NP);
    query.bindValue(":STAT", STAT);
    query.bindValue(":SAL", SAL);
    query.bindValue(":POST", POST);
    query.bindValue(":DIP", DIP);
    query.bindValue(":PT", PT);
    query.bindValue(":NBC", NBC);
    query.bindValue(":CODE", CODE);


    if (query.exec()) {
        return true;
    } else {
        QMessageBox::critical(nullptr, "Erreur", "Erreur lors de l'insertion de l'employé dans la base de données.");
        return false;
    }
}

QSqlQueryModel* employec::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel();

    // Execute the query to retrieve data
    model->setQuery("SELECT ID, NP, STAT, SAL, POST, DIP, PT, NBC,CODE FROM EMPLOYEEC");

    // Check if the query failed
    if (model->lastError().isValid()) {
        QMessageBox::critical(nullptr, "Erreur", "Erreur lors de la récupération des données de la base de données : " + model->lastError().text());
        return nullptr;
    }

    // Set column headers
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom et Prénom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Statut"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Salaire"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Poste"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Diplôme"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Points"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("Nombre de Contrats"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("Code"));



    return model;
}

bool employec::modifier_employe()
{
    // Vérifier si l'ID existe dans la base de données
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM EMPLOYEEC WHERE ID = :ID");
    checkQuery.bindValue(":ID", ID);
    if (!checkQuery.exec()) {
        QMessageBox::critical(nullptr, "Erreur", "Erreur lors de la vérification de l'existence de l'ID.");
        return false;
    }
    checkQuery.next();
    int count = checkQuery.value(0).toInt();

    if (count == 0) {
        // Si l'ID n'existe pas
        QMessageBox::warning(nullptr, "ID non trouvé", "L'ID spécifié n'existe pas dans la base de données.");
        return false;
    }

    // Sinon, procéder à la mise à jour des données de l'employé
    QSqlQuery query;
    query.prepare("UPDATE EMPLOYEEC "
                  "SET NP = :NP, STAT = :STAT, SAL = :SAL, POST = :POST, DIP = :DIP, PT = :PT, NBC = :NBC, CODE = :CODE  "
                  "WHERE ID = :ID");

    // Lier les valeurs
    query.bindValue(":ID", ID);
    query.bindValue(":NP", NP);
    query.bindValue(":STAT", STAT);
    query.bindValue(":SAL", SAL);
    query.bindValue(":POST", POST);
    query.bindValue(":DIP", DIP);
    query.bindValue(":PT", PT);
    query.bindValue(":NBC", NBC);
    query.bindValue(":CODE", CODE);



    // Exécuter la requête
    if (!query.exec()) {
        QMessageBox::critical(nullptr, "Erreur", "Erreur lors de la mise à jour de l'employé : " + query.lastError().text());
        return false;
    }

    QMessageBox::information(nullptr, "Succès", "Employé modifié avec succès.");
    return true;
}
bool employec::supprimer_employe(const QString &id)
{
    // Vérifier si l'ID existe dans la base de données avant de supprimer
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM EMPLOYEEC WHERE ID = :ID");
    checkQuery.bindValue(":ID", id);
    if (!checkQuery.exec()) {
        QMessageBox::critical(nullptr, "Erreur", "Erreur lors de la vérification de l'existence de l'ID.");
        return false;
    }
    checkQuery.next();
    int count = checkQuery.value(0).toInt();

    if (count == 0) {
        // Si l'ID n'existe pas
        QMessageBox::warning(nullptr, "ID non trouvé", "L'ID spécifié n'existe pas dans la base de données.");
        return false;
    }

    // Préparer la requête de suppression
    QSqlQuery query;
    query.prepare("DELETE FROM EMPLOYEEC WHERE ID = :ID");
    query.bindValue(":ID", id);

    // Exécuter la requête de suppression
    if (!query.exec()) {
        QMessageBox::critical(nullptr, "Erreur", "Erreur lors de la suppression de l'employé : " + query.lastError().text());
        return false;
    }

    QMessageBox::information(nullptr, "Succès", "Employé supprimé avec succès.");
    return true;
}
QChart* employec::getStats()
{
    QVector<float> percents = getPercent();

    if (percents.size() > 0){
        float total = percents[0];
        float type1 = percents[1];
        float type2 = percents[2];
        float type3 = percents[3];
        float type4 = percents[4];


        QPieSeries *series = new QPieSeries();

        series->setHoleSize(0.35);
        series->append("<500", (type1/total) * 100);
        series->append("[500,1000]", (type2/total)* 100);
        series->append("[1000,200]", (type3/total)* 100);
        series->append(">2000", (type4/total)* 100);

        QChart *chart = new QChart();

        chart->addSeries(series);
        chart->setTitle("Event Types");
        return chart;
    }

    return nullptr;
}
QVector<float> employec::getPercent()
{
    QVector<float> percents;
    QSqlQuery query("SELECT COUNT(*) AS TOTAL,COUNT(CASE WHEN SAL < 500 THEN 1 END) AS SALAIRE_1,COUNT(CASE WHEN SAL >= 500 AND SAL < 1000 THEN 1 END) AS SALAIRE_2,COUNT(CASE WHEN SAL >= 1000 AND SAL < 2000 THEN 1 END) AS SALAIRE_3,COUNT(CASE WHEN SAL >= 2000 THEN 1 END) AS SALAIRE_4 FROM EMPLOYEEC;");
    if(query.next()){
        int total = query.value("TOTAL").toFloat();
        float type1 = query.value("SALAIRE_1").toFloat();
        float type2 = query.value("SALAIRE_2").toFloat();
        float type3 = query.value("SALAIRE_3").toFloat();
        float type4 = query.value("SALAIRE_4").toFloat();

        percents.append(total);
        percents.append(type1);
        percents.append(type2);
        percents.append(type3);
        percents.append(type4);


    }
    return percents;
}
QSqlQueryModel* employec::afficherunEmployee(const QString &id)
{
    QSqlQueryModel *model = new QSqlQueryModel();

    // Prepare the query with a placeholder for id
    QSqlQuery query;
    query.prepare("SELECT ID, NP, STAT, SAL, POST, DIP, PT, NBC FROM EMPLOYEEC WHERE ID = :id");

    // Bind the actual id value to the query
    query.bindValue(":id", id);

    // Execute the query
    if (!query.exec()) {
        // If the query execution fails, show the error message
        QMessageBox::critical(nullptr, "Erreur", "Erreur lors de la récupération des données de la base de données : " + query.lastError().text());
        return nullptr;
    }

    // Set the model query with the result of the executed query
    model->setQuery(query);

    // Check if the query returned valid results
    if (model->lastError().isValid()) {
        QMessageBox::critical(nullptr, "Erreur", "Erreur lors de la récupération des données de la base de données : " + model->lastError().text());
        return nullptr;
    }

    // Set column headers
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom et Prénom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Statut"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Salaire"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Poste"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Diplôme"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Points"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("Nombre de Contrats"));

    return model;
}
QSqlQueryModel* employec::triParID(const int &n) {
    QSqlQueryModel* model = new QSqlQueryModel();

    switch (n)
    {
    case 0:
        model->setQuery("SELECT ID, NP, STAT, SAL, POST, DIP, PT, NBC FROM EMPLOYEEC ORDER BY CAST(ID AS INT) ASC");
        break;
    case 1:
        model->setQuery("SELECT ID, NP, STAT, SAL, POST, DIP, PT, NBC FROM EMPLOYEEC ORDER BY NP ASC");
        break;
    case 2:
        model->setQuery("SELECT ID, NP, STAT, SAL, POST, DIP, PT, NBC FROM EMPLOYEEC ORDER BY STAT ASC");
        break;
    case 3:
        model->setQuery("SELECT ID, NP, STAT, SAL, POST, DIP, PT, NBC FROM EMPLOYEEC ORDER BY CAST(SAL AS INT) ASC");
        break;
    case 4:
        model->setQuery("SELECT ID, NP, STAT, SAL, POST, DIP, PT, NBC FROM EMPLOYEEC ORDER BY POST ASC");
        break;
    case 5:
        model->setQuery("SELECT ID, NP, STAT, SAL, POST, DIP, PT, NBC FROM EMPLOYEEC ORDER BY DIP ASC");
        break;
    case 6:
        model->setQuery("SELECT ID, NP, STAT, SAL, POST, DIP, PT, NBC FROM EMPLOYEEC ORDER BY PT ASC");
        break;
    case 7:
        model->setQuery("SELECT ID, NP, STAT, SAL, POST, DIP, PT, NBC FROM EMPLOYEEC ORDER BY CAST(NBC AS INT) ASC");
        break;
    }



    if (model->lastError().isValid()) {
        QMessageBox::critical(nullptr, "Erreur", "Erreur lors de la récupération des données triées par ID : " + model->lastError().text());
        delete model;
        return nullptr;
    }

    // Définir les en-têtes des colonnes
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom et Prénom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Statut"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Salaire"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Poste"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Diplôme"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Points"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("Nombre de Contrats"));

    return model;
}

