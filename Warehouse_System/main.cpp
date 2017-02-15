#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstdio>

using namespace std;


char userChoice;


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
        cout << "WRONG";

}

int main()
{
   printMenu();
getchar();
}
