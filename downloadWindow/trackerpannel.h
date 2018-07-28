#ifndef TRACKERPANNEL_H
#define TRACKERPANNEL_H

#include <QWidget>
#include <QTreeWidget>
#include <QTreeWidgetItem>

class TrackerPannel : public QWidget
{
    Q_OBJECT
public:
    explicit TrackerPannel(QWidget *parent = nullptr);

private:
    void createUi();

private:
    QTreeWidget *m_trackTreeWidget;
    QTreeWidgetItem *m_trackerGroup;        //追踪组建



    QTreeWidgetItem *m_allTrackerItem;
    QTreeWidgetItem *m_lostTrackerItem;
    QTreeWidgetItem *m_trackErrorItem;
    QTreeWidgetItem *m_trackWarnItem;
    QTreeWidgetItem *m_trackInforItem;

signals:

public slots:
};

#endif // TRACKERPANNEL_H
