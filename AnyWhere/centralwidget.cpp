#include "centralwidget.h"
#include <QHBoxLayout>

CentralWidget::CentralWidget(QWidget *parent) : QWidget(parent)
{
    imgLabel = new QLabel;
    imgLabel->setScaledContents(true);                              // 内容自动适应标签大小
    QHBoxLayout* mainlayout = new QHBoxLayout(this);
    mainlayout->addWidget(imgLabel);
}
