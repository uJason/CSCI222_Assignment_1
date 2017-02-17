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

void Stock::addNewStock() {
    cout << "-----------------------------------------------------\n";
    cout << "Add New Stock\n";
    cout << "-----------------------------------------------------\n";
}

void Stock::printYearlyStockRep() {
    cout << "-----------------------------------------------------\n";
    cout << "Yearly Stock";
    cout << "-----------------------------------------------------\n";
}

void Stock::printMonthlyStockRep() {
    cout << "-----------------------------------------------------\n";
    cout << "Monthly Stock\n";
    cout << "-----------------------------------------------------\n";
}

void Stock::printWeeklyStockRep() {
    cout << "-----------------------------------------------------\n";
    cout << "Weekly Stock\n";
    cout << "-----------------------------------------------------\n";
}

void Stock::printDailyStockRep() {
    cout << "-----------------------------------------------------\n";
    cout << " Daily Stock\n";
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
