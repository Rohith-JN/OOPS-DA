#include <iostream>
#include "Inventory.h"
#include "ElectronicItem.h"
#include "ClothingItem.h"

using namespace std;

int main() {
    Inventory inventory;
    int choice;

    do {
        cout << "\n===== Inventory Management =====\n";
        cout << "1. Add Electronic\n2. Add Clothing\n3. Display All\n4. Search\n5. Delete\n6. Sort Items By Id\n0. Exit\nChoice: ";
        cin >> choice;

        if (choice == 1) {
            int id, quantity, warranty;
            double price;
            string name;
            cout << "Enter ID, Name, Quantity, Price, Warranty (months): ";
            cin >> id >> name >> quantity >> price >> warranty;
            inventory.addItem(new ElectronicItem(id, name, quantity, price, warranty));

        } else if (choice == 2) {
            int id, quantity;
            double price;
            string name, size, material;
            cout << "Enter ID, Name, Quantity, Price, Size, Material: ";
            cin >> id >> name >> quantity >> price >> size >> material;
            inventory.addItem(new ClothingItem(id, name, quantity, price, size, material));

        } else if (choice == 3) {
            inventory.displayAll();

        } else if (choice == 4) {
            int id;
            cout << "Enter ID to search: ";
            cin >> id;
            Item* item = inventory.findItem(id);
            if (item) item->display();
            else cout << "Item not found.\n";

        } else if (choice == 5) {
            int id;
            cout << "Enter ID to delete: ";
            cin >> id;
            inventory.deleteItem(id);
        } else if (choice == 6) {
            inventory.sortById();
        }

    } while (choice != 0);

    return 0;
}