#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstdio>

#include "Employee.h"

using namespace std;


char userChoice;
string userName;
string userPass;


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
    }
    while(userChoice != 'i');

}


void loginSys() {
    int counterNo = 3;

    do {
        cout << "Pass: ";
        cin >> userPass;

        if(userPass == Employee().getPass()) {
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
