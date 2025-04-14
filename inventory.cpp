#include "Inventory.h"
#include <iostream>
#include <fstream>

void Inventory::addItem(Item* item) {
    items.push_back(item); // adds a pointer to items vector
}

void Inventory::displayAll() const {
    for (int i = 0; i < items.size(); i++) {
        items[i]->display(); // loops through the items vector and calls the display method for each item
    }
}

void Inventory::deleteItem(int id) {
    for (int i = 0; i < items.size(); i++) { // Loops through the list to find the item with the matching ID
        if (items[i]->getId() == id) {
            delete items[i]; // calls delete to free memory
            items.erase(items.begin() + i);
            cout << "Item deleted.\n";
            return;
        }
    }
    cout << "Item not found.\n"; // display message if not found
}

void Inventory::saveToFile(const string& filename) const {
    ofstream file(filename);
    for (size_t i = 0; i < items.size(); ++i) { // Iterates through each item and writes its CSV
        file << items[i]->toCSV() << endl;
    }
}

void Inventory::loadFromFile(const string& filename) { // Opens a file and reads it line-by-line.
    ifstream file(filename);
    string line;
    while (getline(file, line)) {
        Item* item = Item::fromCSV(line); // Each line is passed to the static Item::fromCSV() function.
        if (item) { 
            items.push_back(item); // The created object is added to the vector
        }
    }
}
