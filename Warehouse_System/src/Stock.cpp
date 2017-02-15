#include "Stock.h"

Stock::Stock()
{
    //ctor
}

Stock::~Stock()
{
    //dtor
}


string Stock::getItemDesc() {
    return itemDesc;
}

int Stock::getStockIn() {
    return stockIn;
}

float Stock::getItemCost() {
    return itemCost;
}

float Stock::getTotalAmt() {
    return totalAmount;
}
