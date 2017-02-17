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
        float getItemCost();
        float getTotalAmt();
        string getItemCat();
        string getItemSubCat();
        int getThresHold();

        //Sorting Functions
        void sortByID();
        void sortByCat();
        void sortBySubCat();
        void sortByPriceRange();
        void sortByQty();
        void sortByAsc();
        void sortByDesc();

        void editThreshold();
        void addNewStock();
        void searchStock();
        void removeStock();
        void editStock();

    protected:

    private:
        //Variables Declaration
        int itemID;
        string itemDesc;
        string itemCat;
        string itemSubCat;
        float itemCost;
        float totalAmount;
        int itemQty;
        int thresHold;
};

#endif // STOCK_H
