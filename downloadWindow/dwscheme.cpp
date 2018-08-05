#include "dwscheme.h"

DWScheme* DWScheme::s_pDefaultScheme = nullptr;

DWScheme::DWScheme(QObject *parent) : QObject(parent)
{
    QLinearGradient panelBackGroundGrd(0, 0, 0, 300);
    panelBackGroundGrd.setColorAt(0, 0x006181);
    panelBackGroundGrd.setColorAt(1, 0x00A99D);
    this->m_brushPannelBackGround = panelBackGroundGrd;

    this->m_nHeaderSize = 28;
    this->m_bHeaderAnimation = TRUE;

    QLinearGradient headerBackGrd(0,0,0, 30);
    headerBackGrd.setColorAt(0, 0xFAFDFD);
    headerBackGrd.setColorAt(0.3, 0XC8EAE9);
    headerBackGrd.setColorAt(0.31,0X79a8a6);
    headerBackGrd.setColorAt(1, 0x85DEA9);
    this->m_brushHeaderBackGround = this->m_brushHeaderBackGroundOver = headerBackGrd;

    this->m_penHeaderBorder = QColor(0x79A8A6);
    this->m_penHeaderBorderOver = QColor(0x79A8A6);

    this->m_schemeHeaderLabel.t_textColor = QColor(0xEEEEEE);
    this->m_schemeHeaderLabel.t_textOffColor = QColor(0xFFFFFF);
    this->m_schemeHeaderLabel.t_textOverColor = QColor(0x4f4f4f);
    this->m_schemeHeaderLabel.t_focusPen = QPen(QColor(0x006181), 1, Qt::DotLine);

    QFont localFont;
    localFont.setWeight(QFont::Bold);
    this->m_iconHeaderButtonFold = QPixmap();
    this->m_iconHeaderButtonFoldOver = QPixmap();
    this->m_iconHeaderButtonUnfoldOver = QPixmap();
    this->m_qsizeHeaderButtonSize = QSize(18,18);

    QLinearGradient groupbackground(0, 0, 30, 0);
    groupbackground.setColorAt(1, 0xB8FFD9);
    groupbackground.setColorAt(0, 0xFAFDFD);
    this->m_brushGroupBackGround = this->m_brushGroupBackGroundOver = groupbackground;

    this->m_penGroupBorder = this->m_penGroupBorderOver = QColor(0x79A8A6);

    this->m_nGroupSteps = 20;
    this->m_nGroupFoldDely = 15;
    this->m_dwfoldeffectGroupEffect = DWFoldEffect_NoFolding;
    this->m_bGroupFoldThaw = true;

    this->m_iconLabelScheme.t_textColor=QColor(0x00736A);
    this->m_iconLabelScheme.t_textOverColor = QColor(0x44f49);
    this->m_iconLabelScheme.t_textOffColor = QColor(0xb0b0b0);
    this->m_iconLabelScheme.t_focusPen = QPen(QColor(0x006181), 1, Qt::DotLine);
    this->m_iconLabelScheme.t_iconSize = 16;
    this->m_iconLabelScheme.t_underLineOver = true;
    this->m_iconLabelScheme.t_cursorOver = true;
}

DWScheme *DWScheme::s_fnDefaultScheme()
{
    if(s_pDefaultScheme)
        s_pDefaultScheme = new DWScheme();
    return s_pDefaultScheme;

}
