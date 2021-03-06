#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QWidget>
#include <QVBoxLayout>
#include "basewindow.h"
#include "topwindow.h"
#include "bottomwindow.h"

class MainWindow : public BaseWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    explicit MainWindow(QString image,QWidget *parent = 0);

signals:

public slots:
    void switchWork(bool w);

private:
    void resizeEvent(QResizeEvent *event);

//    QString m_baseimage;
    TopWindow *topwindow;
    BottomWindow *bottomwindow;
    QVBoxLayout *layout;
    bool work=true;

};



class mytest : public QWidget
{
public:
    explicit mytest(QWidget *parent = 0);
};

#endif // MAINWINDOW_H


