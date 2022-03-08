#include "centralwidget.h"
#include "itemdialog.h"
#include <QHBoxLayout>

CentralWidget::CentralWidget(QWidget *parent) : QWidget(parent)
{
    imgLabel = new QLabel("Central Widget",this);
    imgLabel->setScaledContents(true);                  // 内容自动适应标签大小

    mainButton = new QPushButton("创建物品栏",this);
    connect(mainButton,&QPushButton::clicked,this,&CentralWidget::newItemDialog);

    QHBoxLayout* mainlayout = new QHBoxLayout(this);
    mainlayout->addWidget(imgLabel);
    mainlayout->addWidget(mainButton);
}

void CentralWidget::newItemDialog()
{
    ItemDialog* dialog = new ItemDialog();
    dialog->show();
}
