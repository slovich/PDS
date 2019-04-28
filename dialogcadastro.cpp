#include "dialogcadastro.h"
#include "ui_dialogcadastro.h"

DialogCadastro::DialogCadastro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogCadastro)
{
    ui->setupUi(this);
}

DialogCadastro::~DialogCadastro()
{
    delete ui;
}
