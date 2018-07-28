#ifndef DOWNLOADWIDGET_H
#define DOWNLOADWIDGET_H

#include <QWidget>
#include <QSplitter>
#include <QLabel>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QHBoxLayout>

#include "statuspannel.h"
#include "categorypannel.h"
#include "trackerpannel.h"

class DownloadWidget : public QWidget
{
    Q_OBJECT
public:
    explicit DownloadWidget(QWidget *parent = nullptr);


private:
    void createUi();
    void createConnect();

private:



    //下载栏目主界面widget
    QGridLayout *m_mainLayout;
    //下载栏目界面左侧
    QVBoxLayout *m_rightLayout;
    //下载栏目界面右侧
    QVBoxLayout *m_leftLayout;


    //左侧状态pannel
    QWidget *m_statusPannel;
    //左侧分类pannel
    QWidget *m_categoryPannel;
    //左侧追踪pannel
    QWidget *m_trackerPannel;
    //显示下载详细信息界面
    QWidget *m_downloadInformationWidget;
    //显示追踪详细界面
    QWidget *m_trackerInformationWidget;



signals:

public slots:
};

#endif // DOWNLOADWIDGET_H
