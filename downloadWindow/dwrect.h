#ifndef DWRECT_H
#define DWRECT_H

#include <QPainter>
#include <QWidget>



class DWRect
{
public:

    DWRect(int topLeft, int topRight, int bottomLeft, int bottomRight);
    DWRect(int redius = 0);

    void draw(QPainter *painter,const QRect &rect);

public:
    int m_topLeft, m_topRight;
    int m_bottomLeft, m_bottomRight;
    int is_equal;



};

#endif // DWRECT_H
