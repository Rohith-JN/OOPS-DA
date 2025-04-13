#include "ClothingItem.h"
#include <iostream>

using namespace std;

ClothingItem::ClothingItem(int id, const string& name, int quantity, double price,
                           const string& size, const string& material)
    : Item(id, name, quantity, price), size(size), material(material) {}

void ClothingItem::display() const {
    cout << "[CLOTHING] ID: " << id << ", Name: " << name
              << ", Qty: " << quantity << ", Price: $" << price
              << ", Size: " << size << ", Material: " << material << "\n";
}
