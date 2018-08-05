#ifndef DWSCHEME_H
#define DWSCHEME_H

#include <QObject>
#include <QWidget>
#include <QIcon>
#include "dwrect.h"

enum DWFoldEffect
{
    DWFoldEffect_NoFolding,
    DWFoldEffect_ShrunkFolding,
    DWFoldEffect_SlidFolding
};

struct IconLabelScheme
{
    QColor t_textColor, t_textOverColor, t_textOffColor;
    QPen t_focusPen;
    QFont t_font;
    int t_iconSize;
    bool t_underLineOver, t_cursorOver;

};


class DWScheme : public QObject
{
    Q_OBJECT
public:
    explicit DWScheme(QObject *parent = nullptr);

public:
    static DWScheme* s_fnDefaultScheme();

    QBrush m_brushPannelBackGround;
    QBrush m_brushHeaderBackGround, m_brushHeaderBackGroundOver;
    IconLabelScheme m_schemeHeaderLabel;
    QPen m_penHeaderBorder, m_penHeaderBorderOver;

    //header scheme
    int m_nHeaderSize;
    bool m_bHeaderAnimation;
    DWRect m_dwrectHeaderCorners;

    QIcon m_iconHeaderButtonFold;
    QIcon m_iconHeaderButtonFoldOver;
    QIcon m_iconHeaderButtonUnfoldOver;
    QSize m_qsizeHeaderButtonSize;

    QBrush m_brushGroupBackGround, m_brushGroupBackGroundOver;
    QPen m_penGroupBorder, m_penGroupBorderOver;
    int m_nGroupSteps, m_nGroupFoldDely;
    DWFoldEffect m_dwfoldeffectGroupEffect;
    bool m_bGroupFoldThaw;
    IconLabelScheme m_iconLabelScheme;

protected:
    static DWScheme *s_pDefaultScheme;

signals:

public slots:
};

#endif // DWSCHEME_H
