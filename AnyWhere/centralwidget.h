#ifndef CENTRALWIDGET_H
#define CENTRALWIDGET_H

#include <QWidget>
#include <QImage>
#include <QLabel>
#include <QPushButton>

class CentralWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CentralWidget(QWidget *parent = nullptr);
    QImage img;
    QLabel* imgLabel;
    QPushButton* mainButton;

public slots:
    void newItemDialog();
};

#endif // CENTRALWIDGET_H
