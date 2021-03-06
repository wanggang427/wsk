#include "topwindow.h"
#include <QCheckBox>
#include <QHBoxLayout>

#include <QDebug>

TopWindow::TopWindow(QWidget *parent) :
    QWidget(parent)
{
    setWindowFlags(Qt::FramelessWindowHint);
    m_switch = new QCheckBox;
    QHBoxLayout *layout = new QHBoxLayout;
    layout->addStretch(1);
    layout->addWidget(m_switch);
    layout->addStretch(19);
    layout->setMargin(0);
    setLayout(layout);

    connect(m_switch, SIGNAL(clicked(bool)), this, SIGNAL(switch_work(bool)));
}
