#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenuBar>
#include <QSplitter>
#include <QStackedWidget>
#include <QToolBar>
#include <QWidget>
#include <QLabel>
#include <QListWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QTabWidget>

#include "downloadWindow/downloadwidget.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

//define functions
public:
    /*
     * 创建UI
     */
    void createUi();

    void createBody();
    /*
     *创建菜单 create main window
    */
    void createActions();
    void createMenuBars();
    void createToolsBars();


private:
    //菜单
    QMenu *fileMenu;
    QMenu *editMenu;
    QMenu *visualMenu;
    QMenu *toolMenu;
    QMenu *helpMenu;
    QMenu *registMenu;

    //actions
    QAction *newAction;
    QAction *editAction;
    QAction *pushAction;
    QAction *continueAction;
    QAction *cancelAction;
    QAction *deleteAction;
    QAction *settingAction;
    QAction *toupAction;
    QAction *todownAction;
    QAction *totopAction;
    QAction *tobuttonAction;

    //工具栏
    QToolBar *newToolBar;
    QToolBar *deleteToolBar;
    QToolBar *stopToolBar;
    QToolBar *continueToolBar;
    QToolBar *editToolBar;

    //主体部分

    QTabWidget *mainTabWidget;
    QWidget *downloadWdiget;
    QWidget *searchWdiget;
    QWidget *playWdiget;
//define slots    
private slots:
    void createconnections();
    
};

#endif // MAINWINDOW_H
