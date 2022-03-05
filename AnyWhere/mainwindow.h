#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "centralwidget.h"
#include <QMainWindow>
#include <QImage>
#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include <QToolBar>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void createActions(){}                      // 创建动作
    void createMenus(){}                        // 创建菜单
    void createToolBars(){}                     // 创建工具栏

private:
    Ui::MainWindow *ui;

    // 菜单栏目
    QMenu* fileMenu;
    QMenu* sceneMenu;

    // 窗口属性
    QImage img;                                 // 窗口图标
    QString fileName;                           // 打开的文件名

    // 中心窗口
    CentralWidget* centralWidget;               // 中心窗口

    // 动作列表
    QAction* newFileAction;                     // 文件菜单项
    QAction* newWindowAction;
    QAction* openFileAction;
    QAction* recentFileAction;
    QAction* saveAction;
    QAction* saveAsAction;
    QAction* closeAction;
    QAction* exitAction;
    QAction* newSceneAction;                    // 场景菜单项
    QAction* setSceneAction;

    // 工具栏
    QToolBar* fileTool;
    QToolBar* sceneTool;

};
#endif // MAINWINDOW_H
