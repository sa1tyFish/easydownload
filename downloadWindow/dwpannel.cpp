#include "dwpannel.h"

DWpannel::DWpannel(QWidget *parent) : QWidget(parent)
{
    this->m_pScheme = DWScheme::s_fnDefaultScheme();

    setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);

    QVBoxLayout *vb1 = new QVBoxLayout();
    vb1->setMargin(8);
    vb1->setSpacing(8);
    setLayout(vb1);
}

void DWpannel::fnAddwidget(QWidget *widget)
{
    if(widget)
        layout()->addWidget(widget);
}

void DWpannel::fnAddStretch(int s)
{
    ((QVBoxLayout*)layout())->addStretch(s);
}

void DWpannel::setScheme(DWScheme *scheme)
{
    if(scheme)
    {

    }
}

void DWpannel::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.fillRect(rect(), this->m_pScheme->m_brushPannelBackGround);
}
