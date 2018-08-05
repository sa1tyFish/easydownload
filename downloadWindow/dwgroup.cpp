#include "dwgroup.h"

#include <QApplication>



DWGroup::DWGroup(QWidget *parent, bool hasHeader)
    :QFrame(parent),
      m_bHasHeader(hasHeader)
{
    setScheme(DWScheme::s_fnDefaultScheme());

    QVBoxLayout *vb1 = new QVBoxLayout();
    vb1->setMargin(4);
    vb1->setSpacing(0);
    setLayout(vb1);
}

DWGroup::~DWGroup()
{

}

void DWGroup::setScheme(DWScheme *scheme)
{
    if(scheme)
    {
        this->m_pScheme = scheme;
        this->m_pIconScheme = &(scheme->m_iconLabelScheme);
        update();
    }
}

void DWGroup::fnAddIconLabel(DWIconLabel *label, bool addToLayout)
{
    if(!label) return;

    if(addToLayout)
    {
        QHBoxLayout *hb1 = new QHBoxLayout();
        hb1->setMargin(0);
        hb1->setSpacing(0);
        hb1->addWidget(label);
        hb1->addStretch();

        this->getGroupLayout()->addLayout(hb1);
    }
}

QPixmap DWGroup::fnTransParentRender()
{
    QPixmap pm(size());
    pm.fill(Qt::transparent);

    render(&pm, QPoint(0,0), rect(), DrawChildren|IgnoreMask);

    return pm;
}

void DWGroup::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setBrush(this->m_pScheme->m_brushGroupBackGround);
    painter.setPen(this->m_pScheme->m_penGroupBorder);
    painter.drawRect(rect().adjusted(0, -(int)this->m_bHasHeader, -1, -1));
}

void DWGroup::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
    case Qt::Key_Down:
    {
        QKeyEvent kevent(QEvent::KeyPress, Qt::Key_Tab, 0);
        QApplication::sendEvent(this, &kevent);
        return;
    }
    case Qt::Key_Up:
    {
        QKeyEvent kevent(QKeyEvent::KeyPress,Qt::Key_Tab, Qt::ShiftModifier);
        QApplication::sendEvent(this, &kevent);
        return;
    }

    default:;
    }
    QWidget::keyPressEvent(event);
}

void DWGroup::keyReleaseEvent(QKeyEvent *event)
{
    switch (event->key()) {
    case Qt::Key_Down:
    {
        QKeyEvent kevent(QEvent::KeyRelease, Qt::Key_Tab, 0);
        QApplication::sendEvent(this, &kevent);
        return;
    }
    case Qt::Key_Up:
    {
        QKeyEvent kevent(QKeyEvent::KeyRelease,Qt::Key_Tab, Qt::ShiftModifier);
        QApplication::sendEvent(this, &kevent);
        return;
    }

    default:;
    }
    QWidget::keyReleaseEvent(event);
}

