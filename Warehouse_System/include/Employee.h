#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>

using namespace std;

class Employee
{
    public:
        Employee();
        virtual ~Employee();

        string getName();
        string getPass();

        void loginSys();


    protected:

    private:
        string eName;
        string ePass;

};

#endif // EMPLOYEE_H
