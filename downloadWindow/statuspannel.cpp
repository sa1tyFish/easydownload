#include "statuspannel.h"

StatusPannel::StatusPannel(QWidget *parent) : QWidget(parent)
{
    this->createUi();
   // setWindowTitle(QObject::trUtf8("状态"));
}

void StatusPannel::createUi()
{
//    QLabel *test = new QLabel(this);
//    test->setText("dsadasdsa");
    this->m_statusTreeWidget = new QTreeWidget(this);
    this->m_statusTreeWidget->setHeaderHidden(true);

    this->m_statusGroup = new QTreeWidgetItem(this->m_statusTreeWidget);
    this->m_statusGroup->setText(0,QObject::trUtf8("状态"));

    this->m_downloadingItem = new QTreeWidgetItem(this->m_statusGroup);
    this->m_downloadingItem->setText(0, QObject::trUtf8("状态"));
    this->m_downloadingItem->setIcon(0, QIcon(":/actions/new.ico"));



}
