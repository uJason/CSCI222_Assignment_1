#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "Stock.h"

class Transaction
{
    public:
        Transaction();
        virtual ~Transaction();

        void setSold();

    protected:

    private:
        Stock itemID();
        Stock itemCost();
        bool soldStatus;


};

#endif // TRANSACTION_H
