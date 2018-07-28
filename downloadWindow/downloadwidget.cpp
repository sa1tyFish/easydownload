#include "downloadwidget.h"
#include <QTextEdit>

DownloadWidget::DownloadWidget(QWidget *parent) : QWidget(parent)
{
    this->createUi();

}

void DownloadWidget::createUi()
{

    QLabel *fist = new QLabel();
    fist->setText("dsdad");
    QLabel *sec = new QLabel();
    sec->setText("dsdsadas");


    this->m_mainLayout = new QGridLayout(this);



    this->m_leftLayout = new QVBoxLayout();
    this->m_rightLayout = new QVBoxLayout();
    this->m_mainLayout->addLayout(this->m_leftLayout, 0,0);
    this->m_mainLayout->addLayout(this->m_rightLayout, 0,1);
    this->m_mainLayout->setColumnStretch(0,1);
    this->m_mainLayout->setColumnStretch(1,4);



    //添加状态pannel
    this->m_statusPannel = new StatusPannel();
    //添加标签pannel
    this->m_categoryPannel = new CategoryPannel();
    //添加追踪标签
    this->m_trackerPannel = new TrackerPannel();


    this->m_leftLayout->addWidget(this->m_statusPannel);
    this->m_leftLayout->addWidget(this->m_categoryPannel);
    this->m_leftLayout->addWidget(this->m_trackerPannel);
    this->m_leftLayout->setSpacing(3);
    this->m_leftLayout->setMargin(0);


//    this->m_leftLayout->addWidget(this->m_statusPannel);
//    this->m_rightLayout->addWidget(this->m_statusPannel);

    //    this->m_leftLayout = new QVBoxLayout(this);

    //    this->m_statusTreeWidget = new DownloadStatusPanel();
    //     this->m_leftLayout->addWidget(this->m_statusTreeWidget);

    //    this->m_statusTreeWidget = new QTreeWidget();
    //    this->m_statusGroup = new QTreeWidgetItem(this->m_statusTreeWidget);
    //    this->m_statusGroup->setText(0, trUtf8("状态"));
    //    this->m_allDownloadItem = new QTreeWidgetItem(this->m_statusGroup);
    //    this->m_allDownloadItem->setText(0, QObject::trUtf8("全部(20)"));
    //    this->m_allDownloadItem->setIcon(0, QIcon(":/actions/new.ico"));
    //    this->m_downloadingItem = new QTreeWidgetItem(this->m_statusGroup);
    //    this->m_downloadingItem->setText(0, QObject::trUtf8("下载中(1)"));
    //    this->m_downloadingItem->setIcon(0, QIcon(":/actions/new.ico"));
    //    this->m_createTorrentItem = new QTreeWidgetItem(this->m_statusGroup);
    //    this->m_createTorrentItem->setText(0, QObject::trUtf8("做种(0)"));
    //    this->m_createTorrentItem->setIcon(0, QIcon(":/actions/new.ico"));
    //    this->m_completeDownloadItem = new QTreeWidgetItem(this->m_statusGroup);
    //    this->m_completeDownloadItem->setText(0, QObject::trUtf8("完成(12"));
    //    this->m_completeDownloadItem->setIcon(0, QIcon(":/actions/new.ico"));
    //    this->m_stopDownloadItem = new QTreeWidgetItem(this->m_statusGroup);
    //    this->m_stopDownloadItem->setText(0, QObject::trUtf8("暂停(2)"));
    //    this->m_stopDownloadItem->setIcon(0, QIcon(":/actions/new.ico"));
    //    this->m_activeDownloadItem = new QTreeWidgetItem(this->m_statusGroup);
    //    this->m_activeDownloadItem->setText(0, QObject::trUtf8("活动"));
    //    this->m_activeDownloadItem->setIcon(0, QIcon(":/actions/new.ico"));
    //    this->m_inactiveDownloadItem = new QTreeWidgetItem(this->m_statusGroup);
    //    this->m_inactiveDownloadItem->setText(0, QObject::trUtf8("非活动"));
    //    this->m_inactiveDownloadItem->setIcon(0, QIcon(":/actions/new.ico"));
    //    this->m_errorDownloadItem = new QTreeWidgetItem(this->m_statusGroup);
    //    this->m_errorDownloadItem->setText(0, QObject::trUtf8("错误"));
    //    this->m_errorDownloadItem->setIcon(0, QIcon(":/actions/new.ico"));



    //    this->m_leftLayout->addWidget(this->m_statusTreeWidget);



    //    this->m_mainLayout->addWidget(this->m_statusGroup);




}

void DownloadWidget::createConnect()
{

}
