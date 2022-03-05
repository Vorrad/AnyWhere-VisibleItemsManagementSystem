#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 窗口基本设置
    setWindowTitle("AnyWhere");
    centralWidget = new CentralWidget(this);
    setCentralWidget(centralWidget);

    // 创建动作、菜单、工具栏
    createActions();
    createMenus();
    createToolBars();
    if (img.load(":/icon/image/logoA.svg"))
    {
        qDebug()<<"success\n";
        setWindowIcon(QIcon(QPixmap::fromImage(img)));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

