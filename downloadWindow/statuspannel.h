#ifndef STATUSPANNEL_H
#define STATUSPANNEL_H

#include <QWidget>
#include <QLabel>
#include <QTreeWidgetItem>
#include <QToolBox>

class StatusPannel : public QWidget
{
    Q_OBJECT
public:
    explicit StatusPannel(QWidget *parent = nullptr);

private:
    void createUi();


private:

    //左边
    QTreeWidget *m_statusTreeWidget;
    QTreeWidgetItem *m_statusGroup;         //状态组建




    //正在下载标签
    QTreeWidgetItem *m_downloadingItem;
    //创建种子标签
    QTreeWidgetItem *m_createTorrentItem;
    //完成下载标签
    QTreeWidgetItem *m_completeDownloadItem;
    //所有下载标签
    QTreeWidgetItem *m_allDownloadItem;
    //暂停下载的标签
    QTreeWidgetItem *m_stopDownloadItem;
    //下载错误列表标签
    QTreeWidgetItem *m_errorDownloadItem;
    //处于非激活状态种子的标签（种子无效）
    QTreeWidgetItem *m_inactiveDownloadItem;
    //处于激活状态种子的标签(种子有效）
    QTreeWidgetItem *m_activeDownloadItem;
    //删除下载的标签
    QTreeWidgetItem *m_deleteDownloadItem;

signals:

public slots:
};

#endif // STATUSPANNEL_H
