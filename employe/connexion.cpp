#include "connexion.h"

connexion::connexion()
{

}
bool connexion::createconnect()
{bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("mohamed_bd");
    db.setUserName("mohamed");
    db.setPassword("mohamed");
    if(db.open())
        test=true;


    return test;
}
