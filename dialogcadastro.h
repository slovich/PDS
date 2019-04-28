#ifndef DIALOGCADASTRO_H
#define DIALOGCADASTRO_H

#include <QDialog>

namespace Ui {
class DialogCadastro;
}

class DialogCadastro : public QDialog
{
    Q_OBJECT

public:
    explicit DialogCadastro(QWidget *parent = nullptr);
    ~DialogCadastro();

private:
    Ui::DialogCadastro *ui;
};

#endif // DIALOGCADASTRO_H
