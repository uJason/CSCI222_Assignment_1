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

    protected:

    private:
        string itemDesc;
        int stockIn;
        int stockOut;
        float itemCost;
        float totalAmount;
};

#endif // STOCK_H
