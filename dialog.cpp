#include "dialog.h"
#include "ui_dialog.h"

DialogSculptor::DialogSculptor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogSculptor)
{
    ui-> setupUi(this);
}

DialogSculptor::~DialogSculptor()
{
    delete ui;
}

int DialogSculptor::Linhas()
{
    return ui->spinBoxX->value();
}

int DialogSculptor::Colunas()
{
    return ui->spinBoxY->value();
}

int DialogSculptor::Planos()
{
    return ui->spinBoxZ->value();
}
