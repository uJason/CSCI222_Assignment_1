#include "Employee.h"

Employee::Employee()
{
    eName = "Admin";
    ePass = "1234";
    //ctor
}

Employee::~Employee()
{
    //dtor
}

string Employee::getName() {
    return eName;
}

string Employee::getPass() {
    return ePass;
}
