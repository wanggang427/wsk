#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QWidget>
#include "basewindow.h"

class MainWindow : public BaseWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    explicit MainWindow(QString image,QWidget *parent = 0);

signals:

public slots:

private:
    QString m_baseimage;
};



class mytest : public QWidget
{
public:
    explicit mytest(QWidget *parent = 0);
};

#endif // MAINWINDOW_H


