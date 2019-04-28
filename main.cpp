#include "janelaprincipal.h"
#include <QApplication>
#include "database.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DataBase mydb;          //cria o banco de dados da aplicação com a configuração padrão
    mydb.getDB()->open();   //inicializa o banco de dados
    JanelaPrincipal w;
    w.show();

    return a.exec();
}
