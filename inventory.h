#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include <memory>
#include <string>
#include "Item.h"

class Inventory {
    std::vector<Item*> items;

public:
    void addItem(Item* item);
    void displayAll() const;
    void deleteItem(int id);
    void saveToFile(const string& filename) const;
    void loadFromFile(const string& filename);
};

#endif