/*
 * File: manager.cpp
 * Manager method definitions.
 */

#include "manager.h"
#include "employee.h"

using namespace std;

Manager::Manager(string theName,float thePayRate, bool isSalaried)
  : Employee(theName, thePayRate)
{
    salaried = isSalaried;
}

void Manager:: setSalaried( bool sal)
{
    salaried = sal;
}

bool Manager::getSalaried() const
{
    return salaried;
}

float Manager::pay(float hoursWorked) const
{
    if (salaried)
        return payRate;
    /* else */
    return Employee::pay(hoursWorked);
}
