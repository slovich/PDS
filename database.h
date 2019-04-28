#ifndef DATABASE_H
#define DATABASE_H
#include <QtSql/QSqlDatabase>

class DataBase
{
public:
    DataBase();
    DataBase(QString, QString, QString, QString, QString, QString);
    ~DataBase();
    void setDrive(QString);
    void setHost(QString);
    void setUser(QString);
    void setPass(QString);
    void setPort(QString);
    void setDBName(QString);
    void setDefaultConnection();
    void setConnectionData(QString, QString, QString, QString, QString, QString);
    QSqlDatabase* getDB();

private:
    QString drive, host, user, pass, port, dbname;
    QSqlDatabase db;
};

#endif // DATABASE_H
