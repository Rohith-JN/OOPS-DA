#include "ElectronicItem.h"
#include <iostream>

using namespace std;

ElectronicItem::ElectronicItem(int id, const string& name, int quantity, double price, int warrantyMonths)
    : Item(id, name, quantity, price), warrantyMonths(warrantyMonths) {}

void ElectronicItem::display() const {
    cout << "[ELECTRONIC] ID: " << id << ", Name: " << name
              << ", Qty: " << quantity << ", Price: $" << price
              << ", Warranty: " << warrantyMonths << " months\n";
}

