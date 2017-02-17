#ifndef SUMMARYREPORT_H
#define SUMMARYREPORT_H

#include "Stock.h"
#include <Time.h>

class SummaryReport
{
    public:
        SummaryReport();
        virtual ~SummaryReport();

        //Get-Set
        time_t setTranscDate(time_t time);
        time_t getTranscDate();

        //Printing Functions
        void displayThresHoldList();
        void displayDaily();
        void displayWeekly();
        void displayMonthly();
        void displayYearly();

    protected:

    private:
        Stock itemID;
        Stock itemDesc;
        Stock itemCat;
        Stock itemSubCat;
        time_t transcDate;

};

#endif // SUMMARYREPORT_H
