#include "ClothingItem.h"
#include <iostream>

ClothingItem::ClothingItem(int id, string name, string category, float price, int quantity,
                           string size, string material)
    : Item(id, name, category, price, quantity), size(size), material(material) {}

void ClothingItem::display() const {
    Item::display();
    cout << "    " << "Size: " << size << endl;
    cout << "    " << "Material: " << material << endl;
}

string ClothingItem::toCSV() const {
    return "Clothing," + to_string(id) + "," + name + "," + category + "," +
           to_string(price) + "," + to_string(quantity) + "," + size + "," + material;
}
