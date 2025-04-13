#include "Inventory.h"
#include "utils.h"
#include <iostream>
#include <algorithm>

using namespace std;

// Destructor: deletes all items to free memory
Inventory::~Inventory() {
    for (int i = 0; i < items.size(); i++) {
        delete items[i];
    }
}

// Add a new item to the inventory
void Inventory::addItem(Item* item) {
    items.push_back(item);
}

// Show details of all items
void Inventory::displayAll() const {
    for (int i = 0; i < items.size(); i++) {
        items[i]->display();
    }
}

// Delete an item based on its ID
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

// Find and return pointer to an item by ID
Item* Inventory::findItem(int id) const {
    for (int i = 0; i < items.size(); i++) {
        if (items[i]->getId() == id) {
            return items[i];
        }
    }
    return nullptr;
}

void Inventory::sortById() {
    if (items.size() <= 1) {
        cout << "Not enough items to sort.\n";
        return;
    }
    quickSort(items, 0, items.size() - 1);
    cout << "Items sorted by ID using QuickSort.\n";
}