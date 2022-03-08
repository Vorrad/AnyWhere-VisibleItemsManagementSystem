#ifndef ITEM_H
#define ITEM_H

#include <QString>

enum itemType{
    Electric,
    Digital,
    Daily,
    Clothes,
    Pharmacy,
    FoodandDrink,
    Book,
    Unfiled,
    DIY             // 自定义类别
};

enum itemState{
    Normal,
    AlmostExpired,
    Expired,
};

// 收纳物品类
class Item
{
public:
    Item(QString n = "Unnamed Item",
         itemType t = itemType::Unfiled,
         itemState s = itemState::Normal,
         QString d = "");
    ~Item();

private:
    QString name;
    itemType type;
    itemState state;
    QString description;
};

#endif // ITEM_H
