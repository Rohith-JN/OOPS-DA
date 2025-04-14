#ifndef ELECTRONIC_ITEM_H
#define ELECTRONIC_ITEM_H

#include "Item.h"

class ElectronicItem : public Item { // inherits publicly from Item class
    int warrantyMonths; // unique property specific to ElectronicItem

public:
    ElectronicItem(int id, string name, string category, float price, int quantity,
                   int warrantyMonths); // Constructor to initialize set Item fields and then sets ElectronicItem fields
    void display() const override; // Overrides the pure virtual display() function from the Item base class.
    string toCSV() const override; // Overrides the pure virtual toCSV() method in Item.
};

#endif
