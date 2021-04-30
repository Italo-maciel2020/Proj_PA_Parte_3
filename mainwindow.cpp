#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>
#include "plotter.h"
#include <QStringList>
#include <QProcess>
#include <QStringList>
#include "dialog.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

   /* r = g = b = 255;
    dimx = dimy = dimz = 30;
*/
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Sair()
{
    exit(0);
}

connect(ui->actionSphere,
  SIGNAL (cliked(bool)),
  this,
  SLOT(actionInsertSphere()));

connect(ui->actionPutEllipsoid,
  SIGNAL (cliked(bool)),
  this,
  SLOT(actionInsertEllipsoid()));

connect(ui->actionCutSphere,
  SIGNAL (cliked(bool)),
  this,
  SLOT(actionCutSphere()));

connect(ui->actionSphere,
  SIGNAL (cliked(bool)),
  this,
  SLOT(actionInsertSphere()));

connect(ui->actionPutBox,
  SIGNAL (cliked(bool)),
  this,
  SLOT(actionInsertBox()));

connect(ui->actionPutVoxel,
  SIGNAL (cliked(bool)),
  this,
  SLOT(actionInsertVoxel()));


/*void MainWindow::SetB(int _b){
    b=_b;
    updateColor();
}

void MainWindow::SetR(int _r){
    r=_r;
    updateColor();
}

void MainWindow::SetG(int _g){
    g=_g;
    updateColor();
}

void MainWindow::actionSalvar(){
    Dialog s;
    d.exec();
}*/


