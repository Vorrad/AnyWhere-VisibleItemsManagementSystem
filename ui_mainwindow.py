# -*- coding: utf-8 -*-

################################################################################
## Form generated from reading UI file 'mainwindow.ui'
##
## Created by: Qt User Interface Compiler version 6.2.3
##
## WARNING! All changes made in this file will be lost when recompiling UI file!
################################################################################

from PySide6.QtCore import (QCoreApplication, QDate, QDateTime, QLocale,
    QMetaObject, QObject, QPoint, QRect,
    QSize, QTime, QUrl, Qt)
from PySide6.QtGui import (QAction, QBrush, QColor, QConicalGradient,
    QCursor, QFont, QFontDatabase, QGradient,
    QIcon, QImage, QKeySequence, QLinearGradient,
    QPainter, QPalette, QPixmap, QRadialGradient,
    QTransform)
from PySide6.QtWidgets import (QApplication, QDockWidget, QMainWindow, QMenu,
    QMenuBar, QSizePolicy, QStatusBar, QToolButton,
    QWidget)

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        if not MainWindow.objectName():
            MainWindow.setObjectName(u"MainWindow")
        MainWindow.resize(800, 600)
        icon = QIcon()
        icon.addFile(u"figs/logoA.svg", QSize(), QIcon.Normal, QIcon.Off)
        MainWindow.setWindowIcon(icon)
        self.actionNewFile = QAction(MainWindow)
        self.actionNewFile.setObjectName(u"actionNewFile")
        self.actionNewFile.setCheckable(False)
        self.actionNewWindow = QAction(MainWindow)
        self.actionNewWindow.setObjectName(u"actionNewWindow")
        self.actionOpenFile = QAction(MainWindow)
        self.actionOpenFile.setObjectName(u"actionOpenFile")
        self.actionRecentFile = QAction(MainWindow)
        self.actionRecentFile.setObjectName(u"actionRecentFile")
        self.actionSave = QAction(MainWindow)
        self.actionSave.setObjectName(u"actionSave")
        self.actionSaveAs = QAction(MainWindow)
        self.actionSaveAs.setObjectName(u"actionSaveAs")
        self.actionCloseWindow = QAction(MainWindow)
        self.actionCloseWindow.setObjectName(u"actionCloseWindow")
        self.action_Exit = QAction(MainWindow)
        self.action_Exit.setObjectName(u"action_Exit")
        self.action_Exit.setCheckable(False)
        self.actionNewScene = QAction(MainWindow)
        self.actionNewScene.setObjectName(u"actionNewScene")
        self.actionNewScene.setShortcutContext(Qt.WindowShortcut)
        self.centralwidget = QWidget(MainWindow)
        self.centralwidget.setObjectName(u"centralwidget")
        MainWindow.setCentralWidget(self.centralwidget)
        self.menubar = QMenuBar(MainWindow)
        self.menubar.setObjectName(u"menubar")
        self.menubar.setGeometry(QRect(0, 0, 800, 18))
        self.menuFile = QMenu(self.menubar)
        self.menuFile.setObjectName(u"menuFile")
        self.menuScene = QMenu(self.menubar)
        self.menuScene.setObjectName(u"menuScene")
        MainWindow.setMenuBar(self.menubar)
        self.statusbar = QStatusBar(MainWindow)
        self.statusbar.setObjectName(u"statusbar")
        MainWindow.setStatusBar(self.statusbar)
        self.dockWidget = QDockWidget(MainWindow)
        self.dockWidget.setObjectName(u"dockWidget")
        self.dockWidget.setFloating(False)
        self.dockWidget.setFeatures(QDockWidget.NoDockWidgetFeatures)
        self.dockWidget.setAllowedAreas(Qt.LeftDockWidgetArea)
        self.dockWidgetContents = QWidget()
        self.dockWidgetContents.setObjectName(u"dockWidgetContents")
        self.toolButton = QToolButton(self.dockWidgetContents)
        self.toolButton.setObjectName(u"toolButton")
        self.toolButton.setGeometry(QRect(0, 0, 48, 48))
        icon1 = QIcon()
        icon1.addFile(u"figs/scene_unclicked.svg", QSize(), QIcon.Normal, QIcon.Off)
        self.toolButton.setIcon(icon1)
        self.toolButton.setIconSize(QSize(36, 36))
        self.toolButton_2 = QToolButton(self.dockWidgetContents)
        self.toolButton_2.setObjectName(u"toolButton_2")
        self.toolButton_2.setGeometry(QRect(0, 60, 48, 48))
        icon2 = QIcon()
        icon2.addFile(u"figs/items_unclicked.svg", QSize(), QIcon.Normal, QIcon.Off)
        self.toolButton_2.setIcon(icon2)
        self.toolButton_2.setIconSize(QSize(36, 36))
        self.dockWidget.setWidget(self.dockWidgetContents)
        MainWindow.addDockWidget(Qt.LeftDockWidgetArea, self.dockWidget)

        self.menubar.addAction(self.menuFile.menuAction())
        self.menubar.addAction(self.menuScene.menuAction())
        self.menuFile.addAction(self.actionNewFile)
        self.menuFile.addAction(self.actionNewWindow)
        self.menuFile.addSeparator()
        self.menuFile.addAction(self.actionOpenFile)
        self.menuFile.addAction(self.actionRecentFile)
        self.menuFile.addSeparator()
        self.menuFile.addAction(self.actionSave)
        self.menuFile.addAction(self.actionSaveAs)
        self.menuFile.addSeparator()
        self.menuFile.addAction(self.actionCloseWindow)
        self.menuFile.addSeparator()
        self.menuFile.addAction(self.action_Exit)
        self.menuScene.addAction(self.actionNewScene)

        self.retranslateUi(MainWindow)

        QMetaObject.connectSlotsByName(MainWindow)
    # setupUi

    def retranslateUi(self, MainWindow):
        MainWindow.setWindowTitle(QCoreApplication.translate("MainWindow", u"AnyWhere", None))
        self.actionNewFile.setText(QCoreApplication.translate("MainWindow", u"\u65b0\u5efa\u6587\u4ef6", None))
        self.actionNewWindow.setText(QCoreApplication.translate("MainWindow", u"\u65b0\u5efa\u7a97\u53e3", None))
        self.actionOpenFile.setText(QCoreApplication.translate("MainWindow", u"\u6253\u5f00\u6587\u4ef6", None))
        self.actionRecentFile.setText(QCoreApplication.translate("MainWindow", u"\u6700\u8fd1\u6587\u4ef6", None))
        self.actionSave.setText(QCoreApplication.translate("MainWindow", u"\u4fdd\u5b58", None))
        self.actionSaveAs.setText(QCoreApplication.translate("MainWindow", u"\u53e6\u5b58\u4e3a", None))
        self.actionCloseWindow.setText(QCoreApplication.translate("MainWindow", u"\u5173\u95ed\u7a97\u53e3", None))
        self.action_Exit.setText(QCoreApplication.translate("MainWindow", u"\u9000\u51fa AnyWhere", None))
        self.actionNewScene.setText(QCoreApplication.translate("MainWindow", u"\u65b0\u5efa\u573a\u666f", None))
        self.menuFile.setTitle(QCoreApplication.translate("MainWindow", u"\u6587\u4ef6", None))
        self.menuScene.setTitle(QCoreApplication.translate("MainWindow", u"\u573a\u666f", None))
        self.dockWidget.setWindowTitle("")
        self.toolButton.setText(QCoreApplication.translate("MainWindow", u"\u573a\u666f", None))
#if QT_CONFIG(shortcut)
        self.toolButton.setShortcut("")
#endif // QT_CONFIG(shortcut)
        self.toolButton_2.setText(QCoreApplication.translate("MainWindow", u"\u573a\u666f", None))
#if QT_CONFIG(shortcut)
        self.toolButton_2.setShortcut("")
#endif // QT_CONFIG(shortcut)
    # retranslateUi

