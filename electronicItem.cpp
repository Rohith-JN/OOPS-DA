#include "ElectronicItem.h"
#include <iostream>

ElectronicItem::ElectronicItem(int id, string name, string category, float price, int quantity,
                               int warrantyMonths)
    : Item(id, name, category, price, quantity), warrantyMonths(warrantyMonths) {} 
// Constructor to initialize set Item fields and then sets ElectronicItem fields

void ElectronicItem::display() const { // Overrides the pure virtual display() function from the Item base class.
    Item::display(); 
    cout << "    " << "Warranty: " << warrantyMonths << endl; 
}

string ElectronicItem::toCSV() const { // // Overrides the pure virtual toCSV() method in Item.
    return "Electronic," + to_string(id) + "," + name + "," + category + "," +
           to_string(price) + "," + to_string(quantity) + "," + to_string(warrantyMonths);
}