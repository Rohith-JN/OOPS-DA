#ifndef CLOTHING_ITEM_H
#define CLOTHING_ITEM_H

#include "Item.h"

using namespace std;

class ClothingItem : public Item {
    string size;
    string material;

public:
    ClothingItem(int id, const string& name, int quantity, double price,
                 const string& size, const string& material);
    void display() const override;
};

#endif