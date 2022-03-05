#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "centralwidget.h"
#include <QMainWindow>
#include <QImage>
#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include <QToolBar>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    enum viewType
    {
        scene=1,item,search
    };

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void createActions();                       // 创建动作
    void createMenus();                         // 创建菜单
    void createToolBars();                      // 创建工具栏
    void createSideBar();                       // 创建侧边栏

private:
    void resetSideBar();                         // 弹起侧边栏按钮
    void sceneView();
    void itemView();
    void searchView();

public slots:

    void sceneButtonPressed();
    void itemButtonPressed();
    void searchButtonPressed();

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
    enum viewType viewSelected;                 // 当前视图

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

    // 侧边选项
    QPushButton* sceneButton;
    QPushButton* itemButton;
    QPushButton* searchButton;
};
#endif // MAINWINDOW_H
