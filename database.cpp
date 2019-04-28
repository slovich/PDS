#include "database.h"

DataBase::DataBase()
{
    setDefaultConnection();
}

DataBase::DataBase(QString argDrive, QString argHost, QString argUser, QString argPass, QString argPort, QString argDBName){
    this->setConnectionData(argDrive, argHost, argUser, argPass, argPort, argDBName);
}

void DataBase::setDrive(QString argDrive){
    db = QSqlDatabase::addDatabase(argDrive);
}

void DataBase::setHost(QString argHost){
    db.setHostName(argHost);
}

void DataBase::setUser(QString argUser){
    db.setUserName(argUser);
}

void DataBase::setPass(QString argPass){
    db.setPassword(argPass);
}

void DataBase::setPort(QString argPort){
    db.setPort(argPort.toInt());
}
void DataBase::setDBName(QString argDBName){
    db.setDatabaseName(argDBName);
}

void DataBase::setConnectionData(QString argDrive, QString argHost, QString argUser, QString argPass, QString argPort, QString argDBName){
    this->setDrive(argDrive);
    this->setHost(argHost);
    this->setUser(argUser);
    this->setPass(argPass);
    this->setPort(argPort);
    this->setDBName(argDBName);
}

void DataBase::setDefaultConnection(){
    drive = "QMYSQL";
    host = "db4free.net";
    user = "pds_bict";
    pass = "SenhaFinal";
    port = "3306";
    dbname = "o_posto";
}

QSqlDatabase* DataBase::getDB(){
    return &db;
}

DataBase::~DataBase(){
    db.close();
}
