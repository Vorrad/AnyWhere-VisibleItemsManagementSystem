#ifndef CENTRALWIDGET_H
#define CENTRALWIDGET_H

#include <QWidget>
#include <QImage>
#include <QLabel>

class CentralWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CentralWidget(QWidget *parent = nullptr);
    QImage img;
    QLabel* imgLabel;
signals:

};

#endif // CENTRALWIDGET_H
