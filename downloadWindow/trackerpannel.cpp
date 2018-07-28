#include "trackerpannel.h"

TrackerPannel::TrackerPannel(QWidget *parent) : QWidget(parent)
{
    this->createUi();
}

void TrackerPannel::createUi()
{
    this->m_trackTreeWidget = new QTreeWidget(this);
    this->m_trackTreeWidget->setHeaderHidden(true);

    this->m_trackerGroup = new QTreeWidgetItem(this->m_trackTreeWidget);
    this->m_trackerGroup->setText(0, QObject::trUtf8("Track"));

    this->m_allTrackerItem = new QTreeWidgetItem(this->m_trackerGroup);
    this->m_allTrackerItem->setText(0, QObject::trUtf8("全部"));
    this->m_allTrackerItem->setIcon(0, QIcon(":/actions/new.ico"));
}
