#ifndef CATEGORYPANNEL_H
#define CATEGORYPANNEL_H

#include <QWidget>
#include <QLabel>
#include <QTreeWidgetItem>

class CategoryPannel : public QWidget
{
    Q_OBJECT
public:
    explicit CategoryPannel(QWidget *parent = nullptr);

private:
    void createUi();

private:

    QTreeWidget *m_categoryWidget;
    QTreeWidgetItem *m_categoryGroup;

    //分类容器里面对应标签
    QTreeWidgetItem *m_allCategoryItem;
    QTreeWidgetItem *m_uncategoryItem;

signals:

public slots:
};

#endif // CATEGORYPANNEL_H
