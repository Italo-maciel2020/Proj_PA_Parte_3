#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QActionGroup>
#include "sculptor.h"
#include "plotter.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public slots:
    void Sair(); // interface slot, quem processa essas palavras reservadas são as máquinas declaradas no q_object
   /* void SetG(int);
    void SetR(int);
    void SetB(int);
    void pickColor();
    void updateCoords(int,int);*/

private slots:
   /* void actionSalvar();
    void actionNew();
    void actionInsertSphere();
    void actionInsertEllipsoid();
    void actionCutSphere();
    void actionCutEllipsoid();        //Todas as funções respectivas aos icones da barra de ferramentas da interface
    void actionInsertBox();
    void actionInsertVoxel();
    void actionCutBox();
    void actionCutVoxel();
    void clickedPlaneXY();
    void clickedPlaneYZ();
    void clickedPlaneXZ();
    void InsertValuerX();
    void InsertValuerY();
    void InsertValuerZ();*/

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    /*int r,g,b;
    void updateColor();
    Sculptor *arq;
    int dimx,dimy,dimz;
    int currentObject;
    int currentPlane;
    QActionGroup *actionGroup;*/
};
#endif // MAINWINDOW_H