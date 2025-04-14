#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <memory>
using namespace std;

class Item { // base class Item
protected: // shared fields for all items
    int id;
    string name, category;
    float price;
    int quantity;

public:
    Item(int id, string name, string category, float price, int quantity); // constructor
    virtual ~Item() {} // virtual destructor for deleting derived objects

    int getId() const; // getter
    virtual void display() const; // overridable display function
    virtual string toCSV() const = 0; // abstract class

    static Item* fromCSV(const std::string& line); // parses a CSV line and returns a polymorphic object 
};

#endif
