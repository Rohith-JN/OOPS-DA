#include "ElectronicItem.h"
#include <iostream>

ElectronicItem::ElectronicItem(int id, string name, string category, float price, int quantity,
                               int warrantyMonths)
    : Item(id, name, category, price, quantity), warrantyMonths(warrantyMonths) {}

void ElectronicItem::display() const {
    Item::display();
    cout << "    " << "Warranty: " << warrantyMonths << endl;
}

string ElectronicItem::toCSV() const {
    return "Electronic," + to_string(id) + "," + name + "," + category + "," +
           to_string(price) + "," + to_string(quantity) + "," + to_string(warrantyMonths);
}