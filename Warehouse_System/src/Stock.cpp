#include "Stock.h"

Stock::Stock() {
    itemDesc = "";
    itemCost = 0;
    itemCat = "";
    itemSubCat = "";
    itemID = 1;
}

Stock::~Stock() {
    //dtor
}


string Stock::getItemDesc() {
    return itemDesc;
}

float Stock::getItemCost() {
    return itemCost;
}

float Stock::getTotalAmt() {
    return totalAmount;
}

string Stock::getItemCat() {
    return itemCat;
}

string Stock::getItemSubCat() {
    return itemSubCat;
}

int Stock::getThresHold() {
    return thresHold;
}


void Stock::addNewStock() {
    cout << "-----------------------------------------------------\n";
    cout << "Add New Stock\n";
    cout << "-----------------------------------------------------\n";
}

void Stock::searchStock() {
    cout << "-----------------------------------------------------\n";
    cout << "Search For Stock\n";
    cout << "-----------------------------------------------------\n";
}

void Stock::removeStock() {
    cout << "-----------------------------------------------------\n";
    cout << "Remove Stock\n";
    cout << "-----------------------------------------------------\n";
}

void Stock::editStock() {
    cout << "-----------------------------------------------------\n";
    cout << "Edit Stock\n";
    cout << "-----------------------------------------------------\n";
}

/* Sorting Functions */
void Stock::sortByAsc() {

}

void Stock::sortByCat() {

}

void Stock::sortByDesc() {

}

void Stock::sortBySubCat() {

}

void Stock::sortByID() {

}

void Stock::sortByPriceRange() {

}

void Stock::sortByQty() {

}

