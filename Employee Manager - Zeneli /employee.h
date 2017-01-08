/*
 * File: employee.h
 * Employee class definition.
 */

#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
public:
  Employee(std::string theName, float thePayRate);

    void setName( string name);
    string getName() const;
  
    void setPayRate(float pay) ;
    float getPayRate() const;
  
    float pay(float hoursWorked) const;

protected:
    string name;
    float payRate;
    bool salaried;
};

#endif /* not defined _EMPLOYEE_H */
