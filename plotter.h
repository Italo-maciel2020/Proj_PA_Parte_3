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
public:
    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void setTamanho(int nlinhas,int ncolunas);
    void mousePressEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *event);
   // void loadMatrix(vector<vector<voxel>> a);
signals:
    void updatePos(int, int);
public slots:
    void setfreq(int);
};
