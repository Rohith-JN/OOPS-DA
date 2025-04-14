#include "Item.h"
#include "ClothingItem.h"
#include "ElectronicItem.h"
#include <sstream>
#include <iostream>

using namespace std;

Item::Item(int id, string name, string category, float price, int quantity)
    : id(id), name(name), category(category), price(price), quantity(quantity) {}

int Item::getId() const { return id; }

void Item::display() const {
    cout << "ID: " << id << endl;
    cout << "    " << "Name: " << name << endl;
    cout << "    " << "Category: " << category << endl;
    cout << "    " << "Price: " << price << endl;
    cout << "    " << "Quantity: " << quantity << endl;
}

Item* Item::fromCSV(const string& line) {
    stringstream ss(line);
    string type, temp;

    getline(ss, type, ',');
    if (type == "Clothing") {
        int id, quantity;
        string name, category, size, material;
        float price;

        getline(ss, temp, ','); id = stoi(temp);
        getline(ss, name, ',');
        getline(ss, category, ',');
        getline(ss, temp, ','); price = stof(temp);
        getline(ss, temp, ','); quantity = stoi(temp);
        getline(ss, size, ',');
        getline(ss, material);

        return new ClothingItem(id, name, category, price, quantity, size, material);
    } else if (type == "Electronic") {
        int id, quantity, warranty;
        string name, category;
        float price;

        getline(ss, temp, ','); id = stoi(temp);
        getline(ss, name, ',');
        getline(ss, category, ',');
        getline(ss, temp, ','); price = stof(temp);
        getline(ss, temp, ','); quantity = stoi(temp);
        getline(ss, temp); warranty = stoi(temp);

        return new ElectronicItem(id, name, category, price, quantity, warranty);
    }
    return nullptr;
}
