#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstdio>

#include "Employee.h"
#include "Stock.h"

using namespace std;


char userChoice;
string userName;
string userPass;

Employee employee;

void printMenu() {

    do {
        cout << "\n\n-----------------------------------------------------\n";
        cout << "Welcome To Warehouse System Control\n";
        cout << "-----------------------------------------------------\n";
        cout << "a) Add New Stock\n";
        cout << "b) Remove Stock\n";
        cout << "c) Edit Stock Item\n";
        cout << "d) Search Stock Item\n";
        cout << "e) Daily Stock Summary Report\n";
        cout << "f) Weekly Stock Summary Report\n";
        cout << "g) Monthly Stock Summary Report\n";
        cout << "h) Year Stock Summary Report\n";
        cout << "i) Quit\n\n";

        cout << "Please Enter Your Choice: ";
        cin >> userChoice;

        switch(userChoice) {

            case 'a':
                    Stock().addNewStock();
                    break;

            case 'b': Stock().removeStock();
                    break;

            case 'c': Stock().editStock();
                    break;

            case 'd': Stock().searchStock();
                    break;

            case 'e': Stock().printDailyStockRep();
                    break;

            case 'f': Stock().printWeeklyStockRep();
                    break;

            case 'g': Stock().printMonthlyStockRep();
                    break;

            case 'h': Stock().printYearlyStockRep();
                    break;

            default:
                    cout << "Please Enter A Valid Choice!\n";
        }
    }
    while(userChoice != 'i');

}


void loginSys() {
    int counterNo = 3;

    do {
        cout << "Name: ";
        cin >> userName;

        cout << "Pass: ";
        cin >> userPass;

        if(userPass == employee.getPass() && userName == employee.getName()) {
           cout << "-----------------------------------------------------\n";
           cout << "Successfully Logged In\n";
           cout << "-----------------------------------------------------\n";
           printMenu();
        }
        else {
            cout << "-----------------------------------------------------\n";
            cout << "Wrong Password! Try Again! Attempts Left:" << counterNo << endl;
            cout << "-----------------------------------------------------\n";
            counterNo--;
        }

    }
    while (counterNo != 0);
        cout << "You Have Reached Daily Login Limit!\n";
        cout << "-----------------------------------------------------\n";
        getchar();

}



int main()
{
   loginSys();
    getchar();
}
