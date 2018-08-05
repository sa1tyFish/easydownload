#include "dwrect.h"
#include <QWidget>
#include <QDebug>



DWRect::DWRect(int topLeft, int topRight, int bottomLeft, int bottomRight)
    :m_topLeft(topLeft),
      m_topRight(topRight),
      m_bottomLeft(bottomLeft),
      m_bottomRight(bottomRight)
{
    this->is_equal = (this->m_topLeft == this->m_topRight && this->m_bottomLeft == this->m_bottomRight && this->m_bottomLeft == this->m_topLeft);
}

DWRect::DWRect(int redius)
    :m_topLeft(0),
      m_topRight(0),
      m_bottomLeft(0),
      m_bottomRight(0)
{
    this->is_equal = true;
}

void DWRect::draw(QPainter *painter, const QRect &rect)
{
    if(this->is_equal)
    {
        if(this->m_bottomLeft)
            painter->drawRoundedRect(rect, this->m_topLeft, this->m_topLeft);
        else
            painter->drawRect(rect);
        return;
    }


    QPainterPath path;

    int rectHeight = rect.height();
    int rectWight = rect.width();





    path.closeSubpath();



    painter->drawPath(path);
}
