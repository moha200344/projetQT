#include "connexion.h"

connexion::connexion()
{

}
bool connexion::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("Driver={Oracle in instantclient12_2};Dbq=localhost:1521/XE;Uid=oussama;Pwd=oussama;");
if(db.open())
    test=true;


return test;
}
