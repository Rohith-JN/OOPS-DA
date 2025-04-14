#ifndef CLOTHING_ITEM_H
#define CLOTHING_ITEM_H

#include "Item.h"

class ClothingItem : public Item {
    string size, material;

public:
    ClothingItem(int id, string name, string category, float price, int quantity,
                 string size, string material);
    void display() const override;
    string toCSV() const override;
};

#endif