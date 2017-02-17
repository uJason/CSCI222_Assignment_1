#include "SummaryReport.h"

SummaryReport::SummaryReport()
{
    //ctor
}

SummaryReport::~SummaryReport()
{
    //dtor
}

time_t SummaryReport::setTranscDate(time_t time) {
    transcDate = time;
}

time_t SummaryReport::getTranscDate() {
    return transcDate;
}

void SummaryReport::displayThresHoldList() {
    cout << "-----------------------------------------------------\n";
    cout << "ThresHold List\n";
    cout << "-----------------------------------------------------\n";
}

void SummaryReport::displayMonthly() {
    cout << "-----------------------------------------------------\n";
    cout << "Monthly Stock\n";
    cout << "-----------------------------------------------------\n";
}

void SummaryReport::displayDaily() {
    cout << "-----------------------------------------------------\n";
    cout << "Daily Stock\n";
    cout << "-----------------------------------------------------\n";
}

void SummaryReport::displayWeekly() {
    cout << "-----------------------------------------------------\n";
    cout << "Weekly Stock\n";
    cout << "-----------------------------------------------------\n";
}

void SummaryReport::displayYearly() {
    cout << "-----------------------------------------------------\n";
    cout << "Yearly Stock\n";
    cout << "-----------------------------------------------------\n";
}
