#include "Item.h"
#include <iostream>

using namespace std;

Item::Item(int id, const string& name, int quantity, double price)
    : id(id), name(name), quantity(quantity), price(price) {}

Item::~Item() {}

int Item::getId() const { return id; }
string Item::getName() const { return name; }
int Item::getQuantity() const { return quantity; }
double Item::getPrice() const { return price; }

void Item::setQuantity(int q) { quantity = q; }
void Item::setPrice(double p) { price = p; }
