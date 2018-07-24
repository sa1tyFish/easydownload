#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenuBar>
#include <QSplitter>
#include <QStackedWidget>
#include <QToolBar>


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
//define memnu bars
    
//define functions
public:
    /*
     * 创建UI
     */
    void createUi();
    /*
     *创建菜单 
    */
    void createActions();
    void createMenuBars();
    void createToolsBars();

//define actions
public:
    //actions
    QAction *createAction;
    QAction *quiteasydownloadAction;


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

//define slots    
private slots:
    void createconnections();
    
};

#endif // MAINWINDOW_H
