#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <memory>
using namespace std;

class Item {
protected:
    int id;
    string name, category;
    float price;
    int quantity;

public:
    Item(int id, string name, string category, float price, int quantity);
    virtual ~Item() {}

    int getId() const;
    virtual void display() const;
    virtual string toCSV() const = 0;

    static Item* fromCSV(const std::string& line);
};

#endif
