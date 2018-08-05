#include "mainwindow.h"

/*×××××××××××××××××××××××××××××××××××××××××××××××××××××
 定义全局变量
*******************************************************/
const QString appName = "EasyDownload";
const QString WelcomeInfo = QObject::trUtf8("欢迎使用EasyDownload");
const QString AutoUploadPath = "...........";

/*
 *构造函数
 */

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->createUi();


}

MainWindow::~MainWindow()
{
    
}

void MainWindow::createUi()
{
    this->resize(400, 400);

    this->setWindowTitle(appName);
    //创建动作
    this->createActions();
    //创建菜单栏
    this->createMenuBars();
    //创建工具栏
    this->createToolsBars();
    
    //创建主体
    this->createBody();
}

void MainWindow::createBody()
{
    /*
     * 创建主体 一个tabwidget
     */
    this->mainTabWidget = new QTabWidget(this);

    //downloadwdiget 待替换
    this->downloadWdiget = new DownloadWidget(this);

    //searchwidget 待替换
    this->searchWdiget = new QWidget();

    //playwidget 待替换
    this->playWdiget = new QWidget();
    this->playWdiget->setStyleSheet("font-weight:3600;\n color:red;");
    this->mainTabWidget->addTab(this->downloadWdiget, QObject::trUtf8("下载"));
    this->mainTabWidget->addTab(this->searchWdiget, QObject::trUtf8("检索"));
    this->mainTabWidget->addTab(this->playWdiget, QObject::trUtf8("播放"));


    setCentralWidget(this->mainTabWidget);

}


//创建动作
void MainWindow::createActions()
{
    newAction = new QAction(QIcon(":/actions/new.ico"),QObject::trUtf8("新建"), this);
    newAction->setShortcut(QObject::trUtf8("Ctrl-N"));
    newAction->setStatusTip(QObject::trUtf8("新建一个下载链接"));

    editAction = new QAction(QIcon(":/actions/new.ico"),QObject::trUtf8("编辑"), this);

    pushAction  =new QAction(QIcon(":/actions/new.ico"),QObject::trUtf8("暂停"), this);

    continueAction = new QAction(QIcon(":/actions/new.ico"),QObject::trUtf8("继续"), this);

    cancelAction = new QAction(QIcon(":/actions/new.ico"),QObject::trUtf8("取消"), this);

    deleteAction = new QAction(QIcon(":/actions/new.ico"),QObject::trUtf8("删除"), this);

    settingAction = new QAction(QIcon(":/actions/new.ico"),QObject::trUtf8("设置"), this);

    toupAction = new QAction(QIcon(":/actions/new.ico"),QObject::trUtf8("上翻"), this);

    todownAction = new QAction(QIcon(":/actions/new.ico"),QObject::trUtf8("下翻"), this);

    totopAction = new QAction(QIcon(":/actions/new.ico"),QObject::trUtf8("首页"), this);


    tobuttonAction = new QAction(QIcon(":/actions/new.ico"),QObject::trUtf8("尾页"), this);
}

//创建目录
void MainWindow::createMenuBars()
{
    fileMenu = this->menuBar()->addMenu(QObject::trUtf8("文件"));
    fileMenu->addAction(this->newAction);

    editMenu = this->menuBar()->addMenu(QObject::trUtf8("编辑"));
    editMenu->addAction(this->editAction);

    visualMenu = this->menuBar()->addMenu(QObject::trUtf8("视图"));
    visualMenu->addAction(this->editAction);

    toolMenu = this->menuBar()->addMenu(QObject::trUtf8("工具"));

    helpMenu = this->menuBar()->addMenu(QObject::trUtf8("帮助"));
    helpMenu->addAction(this->cancelAction);

    registMenu = this->menuBar()->addMenu(QObject::trUtf8("注册"));
    registMenu->addAction(this->editAction);
}
//创建工具菜单
void MainWindow::createToolsBars()
{
    this->newToolBar = this->addToolBar("new");
    this->newToolBar->addAction(this->newAction);


    this->deleteToolBar = this->addToolBar("delete");
    this->deleteToolBar->addAction(this->deleteAction);

    this->stopToolBar = this->addToolBar("stop");
    this->stopToolBar->addAction(this->pushAction);

    this->continueToolBar = this->addToolBar("continue");
    this->continueToolBar->addAction(this->continueAction);

    this->editToolBar = this->addToolBar("edit");
    this->editToolBar->addAction(this->editAction);
}


//创建事件连接
void MainWindow::createconnections()
{

}
