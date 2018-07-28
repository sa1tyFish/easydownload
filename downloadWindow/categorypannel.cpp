#include "categorypannel.h"

CategoryPannel::CategoryPannel(QWidget *parent) : QWidget(parent)
{
    this->createUi();
}

void CategoryPannel::createUi()
{
    this->m_categoryWidget = new QTreeWidget(this);
    this->m_categoryWidget->setHeaderHidden(true);

    this->m_categoryGroup = new QTreeWidgetItem(this->m_categoryWidget);
    this->m_categoryGroup->setText(0, QObject::trUtf8("分类"));
    this->m_categoryGroup->setIcon(0, QIcon(":/actions/new.ico"));

    this->m_allCategoryItem = new QTreeWidgetItem(this->m_categoryGroup);
    this->m_allCategoryItem->setText(0, QObject::trUtf8("全部"));
    this->m_allCategoryItem->setIcon(0, QIcon(":/actions/new.ico"));

    this->m_uncategoryItem = new QTreeWidgetItem(this->m_categoryGroup);
    this->m_uncategoryItem->setText(0, QObject::trUtf8("未分类"));
    this->m_uncategoryItem->setIcon(0, QIcon(":/actions/new.ico"));

    QSizePolicy policy = this->m_categoryWidget->sizePolicy();
    policy.setVerticalPolicy(QSizePolicy::Expanding);
    policy.setHorizontalPolicy(QSizePolicy::Expanding);
    this->m_categoryWidget->setSizePolicy(policy);

}
