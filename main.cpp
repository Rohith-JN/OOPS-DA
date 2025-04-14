#include "Inventory.h"
#include "ClothingItem.h"
#include "ElectronicItem.h"
#include <iostream>

int main() {
    Inventory inventory;
    inventory.loadFromFile("inventory.txt");

    int choice;
    do {
        cout << "\n--- Inventory Management ---\n";
        cout << "1. Add Clothing Item\n";
        cout << "2. Add Electronic Item\n";
        cout << "3. View All Items\n";
        cout << "4. Delete Item by ID\n";
        cout << "5. Save & Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            int id, quantity;
            string name, category, size, material;
            float price;
            cout << "Enter ID, Name, Category, Price, Quantity, Size, Material: ";
            cin >> id >> name >> category >> price >> quantity >> size >> material;
            inventory.addItem(new ClothingItem(id, name, category, price, quantity, size, material));

        } else if (choice == 2) {
            int id, quantity, warranty;
            string name, category;
            float price;
            cout << "Enter ID, Name, Category, Price, Quantity, Warranty (months): ";
            cin >> id >> name >> category >> price >> quantity >> warranty;
            inventory.addItem(new ElectronicItem(id, name, category, price, quantity, warranty));

        } else if (choice == 3) {
            inventory.displayAll();
        } else if (choice == 4) {
            int id;
            cout << "Enter ID to delete: ";
            cin >> id;
            inventory.deleteItem(id);
        }
    } while (choice != 5);

    inventory.saveToFile("inventory.txt");
    cout << "Inventory saved. Exiting...\n";
    return 0;
}
