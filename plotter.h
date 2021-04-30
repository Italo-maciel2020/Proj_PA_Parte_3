#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include "sculptor.h"
#include <QVector>
#include <vector>

using namespace std;

class Plotter : public QWidget
{
    Q_OBJECT
private:
    float fase,freq;
    int nlinhas,ncolunas;
   // vector <vector<voxel>> v;
    int borderh,borderv,dimcelula,larguratela,alturatela,larguracelula,alturacelula;
    bool pressed;    
/*
* Método que cria a caixa de desenho na interface
*/
public:
    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event); // método que é ativado para o desenho na user interface a partir da classe QPaintEvent
    void setTamanho(int nlinhas,int ncolunas); // seta o tamanho do componente de desenho
    void mousePressEvent(QMouseEvent *); // método que gere os eventos do clique na tela
    void mouseReleaseEvent(QMouseEvent *event); // 
   // void loadMatrix(vector<vector<voxel>> a); // recebe uma matriz para carregar a matriz de desenho no plano, selecionando no scultor os métodos e passando para o draw
signals:
    void updatePos(int, int);
public slots:
    void setfreq(int);
};
