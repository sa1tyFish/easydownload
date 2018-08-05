#ifndef DWICONLABEL_H
#define DWICONLABEL_H

#include "dwscheme.h"

#include <QAction>
#include <QPaintEvent>
#include <QWidget>



struct IconLabelScheme;

class DWIconLabel : public QWidget
{
    Q_OBJECT
public:
    explicit DWIconLabel(QWidget *parent = nullptr);
    DWIconLabel(QAction *action, QWidget *parent = nullptr);
    DWIconLabel(const QString &title, QWidget *parent = nullptr);
    DWIconLabel(const QIcon &icon, QWidget *parent = nullptr);

    inline QAction* action(){return m_pAction;}

    void fnSetColor(const QColor &color, const QColor &colorOver, const QColor &colorOff);
    void fnSetFont(const QFont &font);
    void fnSetFocusPen(const QPen &pen);

    void fnSetSchemePointer(IconLabelScheme **pointer);

    virtual QSize sizeHint()const;
    virtual QSize minimumSizeHint()const;



signals:
    void pressed();
    void released();
    void clicked();
    void activated();
    void contextMenu();

public slots:
    void actionChanged();
protected:
    void init();
    virtual void paintEvent(QPaintEvent *event);
    virtual void enterEvent(QEvent *event);
    virtual void leaveEvent(QEvent *event);

    virtual void mousePressEvent(QMouseEvent *event);
    virtual void mouseReleaseEvent(QMouseEvent *event);
    virtual void keyPressEvent(QKeyEvent *event);

    virtual void actionEvent(QActionEvent *event);

    QAction *m_pAction;

    QColor m_color, m_colorOver, m_colorDisabled;
    QFont m_font;
    QPen m_pen;

    IconLabelScheme **m_ppScheme;

    bool m_bOver, m_bPressed;
    bool m_bChangedCursorOver, m_bUnderlineOver;
};

#endif // DWICONLABEL_H
