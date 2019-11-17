#include "mainwindow.h"
#include <QPen>
#include <QPainter>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(500,300,600,300);
}

MainWindow::~MainWindow()
{

}

void MainWindow::paintEvent(QPaintEvent *e)
{
    //画家
    QPainter painter(this);

    //画笔
    Qpen pen;
    pen.setColor(Qt::black);
    pen.setStyle(Qt::SolidLine);

    //设置画笔
    painter.setPen(pen);

    //画两条支线构成坐标系
    painter.drawLine(QPointF)
}
