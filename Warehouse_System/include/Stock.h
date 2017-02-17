#ifndef STOCK_H
#define STOCK_H

#include<iostream>

using namespace std;

class Stock
{
    public:
        Stock();
        virtual ~Stock();
        string getItemDesc();
        int getStockIn();
        int getStockOut();
        float getItemCost();
        float getTotalAmt();

        //Menu Functions
        void printYearlyStockRep();
        void printMonthlyStockRep();
        void printWeeklyStockRep();
        void printDailyStockRep();

        void addNewStock();
        void searchStock();
        void removeStock();
        void editStock();

    protected:

    private:
        string itemDesc;
        int stockIn;
        int stockOut;
        float itemCost;
        float totalAmount;
};

#endif // STOCK_H
