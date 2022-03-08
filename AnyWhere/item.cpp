#include "item.h"

Item::Item(QString n,itemType t,itemState s,QString d)
{
    name = n;
    type = t;
    state = s;
    description = d;
}

Item::~Item()
{

}
