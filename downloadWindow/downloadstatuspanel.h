#ifndef DOWNLOADSTATUSPANEL_H
#define DOWNLOADSTATUSPANEL_H

#include <QWidget>

#include <QWidget>
#include <QSplitter>
#include <QLabel>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QHBoxLayout>

class DownloadStatusPanel : public QTreeWidget
{
    Q_OBJECT
public:
    explicit DownloadStatusPanel(QWidget *parent = nullptr);

private:
    void createUi();


private:
    //左边
    QTreeWidget *m_statusTreeWidget;
    QTreeWidgetItem *m_statusGroup;         //状态组建


    //状态容器里面组件
    QTreeWidgetItem *m_downloadingItem;
    QTreeWidgetItem *m_createTorrentItem;
    QTreeWidgetItem *m_completeDownloadItem;
    QTreeWidgetItem *m_allDownloadItem;
    QTreeWidgetItem *m_stopDownloadItem;
    QTreeWidgetItem *m_errorDownloadItem;
    QTreeWidgetItem *m_inactiveDownloadItem;
    QTreeWidgetItem *m_activeDownloadItem;
    QTreeWidgetItem *m_deleteDownloadItem;


signals:

public slots:
};

#endif // DOWNLOADSTATUSPANEL_H
