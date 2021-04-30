#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QActionGroup>
#include "sculptor.h"
#include "plotter.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

/*
* Todas as operações de desenho estão nessa class
* derivada da classe QMainWindow - herança
* 
*/
class MainWindow : public QMainWindow
{
    Q_OBJECT
//Ponteiro para acessar e ler os dados passados pela user interface
private:
    Ui::MainWindow *ui;
    int r, g, b;

/*
* Conecta o evento do movimento do slider com os slots
* Lê um inteiro emitido pelo sinal e seta para o método
*/
public slots:
    void Sair(); 
    void SetG(int);
    void SetR(int);
    void SetB(int);
    void pickColor();
    void updateCoords(int,int);

/*
* Métodos referentes aos icones da barra de ferramentas da interface
* Associa um
*/
private slots:
   void actionSalvar();
   void actionNew();
    void actionInsertSphere();
    void actionInsertEllipsoid();
    void actionCutSphere();
    void actionCutEllipsoid();        
    void actionInsertBox();
    void actionInsertVoxel();
    void actionCutBox();
    void actionCutVoxel();
    void clickedPlaneXY();
    void InsertValuerX();
    void InsertValuerY();
    void InsertValuerZ();

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
   int r,g,b;
    void updateColor();
    Sculptor *arq;
    int dimx,dimy,dimz;
    int currentObject;
    int currentPlane;
    QActionGroup *actionGroup;
};

#endif // MAINWINDOW_H
