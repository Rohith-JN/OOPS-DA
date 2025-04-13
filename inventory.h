#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include "Item.h"

using namespace std;

class Inventory {
    vector<Item*> items;

public:
    ~Inventory();

    void addItem(Item* item);
    void displayAll() const;
    void deleteItem(int id);
    Item* findItem(int id) const;
    void Inventory::sortById();
};

#endif
