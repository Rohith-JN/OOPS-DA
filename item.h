#ifndef ITEM_H
#define ITEM_H

#include <string>

using namespace std;

class Item {
protected:
    int id;
    string name;
    int quantity;
    double price;

public:
    Item(int id, const string& name, int quantity, double price);
    virtual ~Item();

    int getId() const;
    string getName() const;
    int getQuantity() const;
    double getPrice() const;

    void setQuantity(int);
    void setPrice(double);

    virtual void display() const = 0;
};

#endif
