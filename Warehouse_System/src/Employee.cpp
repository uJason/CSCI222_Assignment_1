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

void Employee::setName(string name) {
    this->eName = name;
}

void Employee::setPass(string pass) {
    this->ePass = pass;
}
