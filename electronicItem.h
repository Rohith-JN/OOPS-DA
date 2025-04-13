#ifndef ELECTRONIC_ITEM_H
#define ELECTRONIC_ITEM_H

#include "Item.h"

using namespace std;

class ElectronicItem : public Item {
    int warrantyMonths;

public:
    ElectronicItem(int id, const string& name, int quantity, double price, int warrantyMonths);
    void display() const override;
};

#endif