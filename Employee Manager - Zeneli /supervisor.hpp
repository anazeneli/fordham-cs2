//
//  supervisor.hpp
//  Employee Manager - Zeneli

#ifndef supervisor_hpp
#define supervisor_hpp

#include <stdio.h>
#include "employee.h" 

using namespace std; 

class Supervisor : public Employee
{
public:
    
    Supervisor(string theName, float thePayRate, string department1)
    : Employee(theName, thePayRate)
    {
        department = department1;
    }
    
    void setDept( string dept)
    {
        department = dept;
    }
    
    string getDept() const
    {
        return department;
    }
    
    
protected:
    string department;
    
};

#endif /* supervisor_hpp */
