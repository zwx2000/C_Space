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
    //����
    QPainter painter(this);

    //����
    Qpen pen;
    pen.setColor(Qt::black);
    pen.setStyle(Qt::SolidLine);

    //���û���
    painter.setPen(pen);

    //������֧�߹�������ϵ
    painter.drawLine(QPointF)
}
