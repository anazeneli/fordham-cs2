/*
 * File: employee.cpp
 * Employee method definitions.
 */

#include "employee.h"
using namespace std;

Employee::Employee(std::string theName, float thePayRate)
{
    name = theName;
    payRate = thePayRate;
}

void Employee:: setPayRate(float pay)
{
    payRate = pay;
}

void Employee::setName(string empName)
{
    name = empName;
}

string Employee::getName() const
{
    return name;
}

float Employee::getPayRate() const
{
    return payRate;
}

float Employee::pay(float hoursWorked) const
{
    return hoursWorked * payRate;
}
