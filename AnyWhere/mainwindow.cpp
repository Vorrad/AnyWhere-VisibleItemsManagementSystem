#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QButtonGroup>
#include <QDockWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QWidget>
#include <QStackedWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 创建动作、菜单、工具栏、侧边栏
    createActions();
    createMenus();
    createToolBars();
    createSideBar();

    // 窗口基本设置
    setWindowTitle("AnyWhere");
    centralWidget = new CentralWidget(this);
    setCentralWidget(centralWidget);
    viewSelected = scene;                       // 默认为scene窗口
    sceneButton->setDown(true);

    // 设置窗口图标
    if (img.load(":/icon/image/logoA.svg"))
    {
        setWindowIcon(QIcon(QPixmap::fromImage(img)));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createActions()
{
    // 打开
    openFileAction = new QAction("打开",this);
    openFileAction->setShortcut(tr("Ctrl+O"));
    openFileAction->setStatusTip("打开一个文件");

    // 新建
    newFileAction = new QAction("新建",this);
    newFileAction->setShortcut(tr("Ctrl+N"));
    newFileAction->setStatusTip("新建一个文件");

    // 关闭
    closeAction = new QAction("关闭",this);
    closeAction->setShortcut(tr("Ctrl+Q"));
    closeAction->setStatusTip("关闭窗口");
    connect(closeAction,&QAction::triggered,this,&QMainWindow::close);
}

void MainWindow::createMenus()
{
    fileMenu = menuBar()->addMenu("文件");
    fileMenu->addAction(openFileAction);
    fileMenu->addAction(newFileAction);
    fileMenu->addAction(closeAction);
}

void MainWindow::createToolBars()
{
    // 文件工具栏
    fileTool = addToolBar("File");
    fileTool->addAction(openFileAction);
    fileTool->addAction(newFileAction);
    fileTool->addAction(closeAction);
}

void MainWindow::createSideBar()
{
    // 创建侧边栏按钮
    sceneButton = new QPushButton("场景",this);
    itemButton = new QPushButton("物品",this);
    searchButton = new QPushButton("搜索",this);
    connect(sceneButton,&QPushButton::clicked,this,&MainWindow::sceneButtonPressed);
    connect(itemButton,&QPushButton::clicked,this,&MainWindow::itemButtonPressed);
    connect(searchButton,&QPushButton::clicked,this,&MainWindow::searchButtonPressed);

//    // 按钮添加入按钮组
//    QButtonGroup* sideBar = new QButtonGroup(this);
//    sideBar->addButton(sceneButton);
//    sideBar->addButton(itemButton);
//    sideBar->addButton(searchButton);
//    sideBar->setExclusive(true);         // 选项按钮互斥

    // 按钮布局
    QVBoxLayout* btnLayout = new QVBoxLayout();
    btnLayout->addWidget(sceneButton);
    btnLayout->addWidget(itemButton);
    btnLayout->addWidget(searchButton);

    // 添加侧边栏
    QDockWidget* docker = new QDockWidget(this);
    QWidget* dockWidget = new QWidget();
    dockWidget->setLayout(btnLayout);
    docker->setWindowTitle("模式");
    docker->setWidget(dockWidget);
    docker->setFeatures(QDockWidget::NoDockWidgetFeatures);     // 不可移动、关闭、浮动
    this->addDockWidget(Qt::LeftDockWidgetArea,docker);         // 停靠在左侧

//    QStackedWidget* sideBar = new QStackedWidget(this);
//    sideBar->addWidget(sceneButton);
//    sideBar->addWidget(itemButton);
//    sideBar->addWidget(searchButton);

//    QHBoxLayout* sideBarLayout = new QHBoxLayout(this);

//    sideBarLayout->setMargin(5);
//    sideBarLayout->setSpacing(5);
//    sideBarLayout->addWidget(sideBar,0,Qt::AlignHCenter);
}

void MainWindow::resetSideBar()
{
    sceneButton->setDown(false);
    itemButton->setDown(false);
    searchButton->setDown(false);
}

void MainWindow::sceneView()
{
    qDebug()<<"sceneView";
}

void MainWindow::itemView()
{
    qDebug()<<"itemView";
}

void MainWindow::searchView()
{
    qDebug()<<"searchView";
}

void MainWindow::sceneButtonPressed()
{
    // 如果按钮已被按下
    if (viewSelected == scene)
    {
        sceneButton->setDown(true);
        return;
    }

    // 按下对应按钮
    resetSideBar();
    sceneButton->setDown(true);
    viewSelected = scene;
    sceneView();
}

void MainWindow::itemButtonPressed()
{
    if (viewSelected == item)
    {
        itemButton->setDown(true);
        return;
    }

    resetSideBar();
    itemButton->setDown(true);
    viewSelected = item;
    itemView();
}

void MainWindow::searchButtonPressed()
{
    if (viewSelected == search)
    {
        searchButton->setDown(true);
        return;
    }

    resetSideBar();
    searchButton->setDown(true);
    viewSelected = search;
    searchView();
}
