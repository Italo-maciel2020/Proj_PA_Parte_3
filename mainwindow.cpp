#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>
#include "plotter.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
 /*connect(ui->pushButtonQuit,
          SIGNAL(clicked(bool)),
          this,
          SLOT(teste()));*/
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Sair()
{
    exit(0);
}

/*void MainWindow::copiaTexto()
{
     ui -> textBrowser -> setText()(ui->textEdit);
}*/
/* A conexão de funções entre a interface e
 o usuário é no construtor */
