#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include <memory>
#include <string>
#include "Item.h"

class Inventory {
    std::vector<Item*> items; // collections of pointers to item object

public:
    void addItem(Item* item); // adds a new item to inventory
    void displayAll() const; // loops through all items and calls their display method
    void deleteItem(int id); // deletes an item by id
    void saveToFile(const string& filename) const; // Calls toCSV() on each item to write them line by line
    void loadFromFile(const string& filename); // Reads a file and populates the inventory using Item::fromCSV()
};

#endif