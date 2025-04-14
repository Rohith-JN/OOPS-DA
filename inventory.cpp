#include "Inventory.h"
#include <iostream>
#include <fstream>

void Inventory::addItem(Item* item) {
    items.push_back(item);
}

void Inventory::displayAll() const {
    for (int i = 0; i < items.size(); i++) {
        items[i]->display();
    }
}

void Inventory::deleteItem(int id) {
    for (int i = 0; i < items.size(); i++) {
        if (items[i]->getId() == id) {
            delete items[i];
            items.erase(items.begin() + i);
            cout << "Item deleted.\n";
            return;
        }
    }
    cout << "Item not found.\n";
}

void Inventory::saveToFile(const string& filename) const {
    ofstream file(filename);
    for (size_t i = 0; i < items.size(); ++i) {
        file << items[i]->toCSV() << endl;
    }
}

void Inventory::loadFromFile(const string& filename) {
    ifstream file(filename);
    string line;
    while (getline(file, line)) {
        Item* item = Item::fromCSV(line);
        if (item) {
            items.push_back(item);
        }
    }
}
