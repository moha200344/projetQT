#ifndef EMPLOYEC_H
#define EMPLOYEC_H

#include <QString>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QtCharts>
#include <QPieSeries>

class employec
{
private:
    QString ID, NP, STAT, SAL, POST, DIP, PT, NBC;
    int CODE;

public:
    employec();
    employec(QString ID, QString NP, QString STAT, QString SAL, QString POST, QString DIP, QString PT, QString NBC,int CODE);

    // Getters
    QString getID() const { return ID; }
    int getCODE() const {
        return CODE;
    }
    QString getNP() const { return NP; }
    QString getSTAT() const { return STAT; }
    QString getSAL() const { return SAL; }
    QString getPOST() const { return POST; }
    QString getDIP() const { return DIP; }
    QString getPT() const { return PT; }
    QString getNBC() const { return NBC; }
    static QChart* getStats();
    static QVector<float> getPercent();
    // Setters
    void setID(const QString &ID_p) { ID = ID_p; }
    void setNP(const QString &NP_p) { NP = NP_p; }
    void setSTAT(const QString &STAT_p) { STAT = STAT_p; }
    void setSAL(const QString &SAL_p) { SAL = SAL_p; }
    void setPOST(const QString &POST_p) { POST = POST_p; }
    void setDIP(const QString &DIP_p) { DIP = DIP_p; }
    void setPT(const QString &PT_p) { PT = PT_p; }
    void setNBC(const QString &NBC_p) { NBC = NBC_p; }
    void setCODE(const int CODE_p) { CODE = CODE_p; }

    void exportToPdf(const QString &filePath);
    // CRUD operations
    bool ajouter_employe();
    QSqlQueryModel* afficher();
    bool modifier_employe();
    bool supprimer_employe(const QString &id);
    QSqlQueryModel* afficherunEmployee(const QString &id);
   static QSqlQueryModel* triParID(const int &n);
};

#endif // EMPLOYEC_H
