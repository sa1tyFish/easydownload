#ifndef DWPANNEL_H
#define DWPANNEL_H

#include "dwscheme.h"

#include <QObject>
#include <QPaintEvent>
#include <QWidget>
#include <QSize>
#include <QVBoxLayout>

class DWScheme;

class DWpannel : public QWidget
{
    Q_OBJECT
public:
    explicit DWpannel(QWidget *parent = nullptr);

    void  fnAddwidget(QWidget *widget);
    void fnAddStretch(int s = 0);

    void setScheme(DWScheme *scheme);

protected:
    virtual void paintEvent(QPaintEvent *event);

    DWScheme *m_pScheme;

signals:

public slots:
};

#endif // DWPANNEL_H
