#ifndef ELECTRONIC_ITEM_H
#define ELECTRONIC_ITEM_H

#include "Item.h"

class ElectronicItem : public Item {
    int warrantyMonths;

public:
    ElectronicItem(int id, string name, string category, float price, int quantity,
                   int warrantyMonths);
    void display() const override;
    string toCSV() const override;
};

#endif
