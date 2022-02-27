import sys
from PySide6.QtCore import QFile    # 直接加载UI
from PySide6.QtWidgets import *

from ui_mainwindow import Ui_MainWindow # 加载UI类

class MainWindow(QMainWindow):
    def __init__(self):
        super(MainWindow,self).__init__()
        self.ui = Ui_MainWindow()
        self.ui.setupUi(self)

if __name__ == '__main__':
    # Create the Qt Application
    app = QApplication(sys.argv)
    # Create and show the MyMainWindow
    window = MainWindow()
    window.show()
    # Run the main Qt loop
    sys.exit(app.exec())