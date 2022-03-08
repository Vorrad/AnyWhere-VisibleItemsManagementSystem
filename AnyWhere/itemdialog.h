#ifndef ITEMDIALOG_H
#define ITEMDIALOG_H

#include <QDialog>
#include <QLineEdit>
#include <QComboBox>
#include <QPlainTextEdit>

class ItemDialog : public QDialog
{
    Q_OBJECT
public:
    ItemDialog();

private:
    QLineEdit* nameEdit;
    QComboBox* typeChoose;
    QComboBox* stateChoose;
    QPlainTextEdit* descriptionEdit;
};

#endif // ITEMDIALOG_H
