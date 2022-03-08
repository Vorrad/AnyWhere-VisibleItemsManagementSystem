#include "itemdialog.h"
#include "item.h"
#include <QVBoxLayout>
//#include <QLineEdit>
//#include <QComboBox>
//#include <QPlainTextEdit>

ItemDialog::ItemDialog()
{
    nameEdit = new QLineEdit(this);
    typeChoose = new QComboBox(this);
    stateChoose = new QComboBox(this);
    descriptionEdit = new QPlainTextEdit(this);

    typeChoose->addItem("Electric");
    typeChoose->addItem("Digital");
    typeChoose->addItem("Daily");
    typeChoose->addItem("Clothes");
    typeChoose->addItem("Pharmacy");
    typeChoose->addItem("FoodandDrink");
    typeChoose->addItem("Book");
    typeChoose->addItem("Unfiled");
    typeChoose->addItem("DIY");

    stateChoose->addItem("Normal");
    stateChoose->addItem("AlmostExpired");
    stateChoose->addItem("Expired");

    QVBoxLayout* mainLayout = new QVBoxLayout(this);

    mainLayout->addWidget(nameEdit);
    mainLayout->addWidget(typeChoose);
    mainLayout->addWidget(stateChoose);
    mainLayout->addWidget(descriptionEdit);

    this->setLayout(mainLayout);
}
