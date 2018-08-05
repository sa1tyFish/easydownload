#ifndef DWGROUP_H
#define DWGROUP_H

#include "dwiconlabel.h"
#include "dwscheme.h"

#include <QBoxLayout>
#include <QFrame>
#include <QPaintEvent>
#include <QWidget>

struct IconLabelScheme;

class DWScheme;

class DWIconLabel;

class DWGroup: public QFrame
{
    Q_OBJECT
public:
    DWGroup(QWidget *parent = nullptr, bool hasHeader = false);
    virtual ~DWGroup();

    void setScheme(DWScheme *scheme);

    inline QBoxLayout * getGroupLayout()
    {
        return (QBoxLayout*)layout();
    }
    void fnAddIconLabel(DWIconLabel *label, bool addToLayout = true);

    QPixmap fnTransParentRender();

protected:
    virtual void paintEvent(QPaintEvent *event);
    virtual void keyPressEvent(QKeyEvent *event);
    virtual void keyReleaseEvent(QKeyEvent *event);

    DWScheme *m_pScheme;
    IconLabelScheme *m_pIconScheme;

    bool m_bHasHeader;

};

#endif // DWGROUP_H
