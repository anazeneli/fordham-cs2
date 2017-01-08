//  name.hpp

#ifndef name_hpp
#define name_hpp

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Name
{
private:
    string first_name;
    char middle_initial;
    string last_name;
public:
    Name();
    Name(string first, char mid, string last);
    
    void set_first_name(string first);
    void set_middle_initial(char mid);
    void set_last_name(string last);
    
    void Print() const;
    
    string get_first_name() const;
    char get_middle_initial() const;
    string get_last_name() const;
};

#endif /* name_hpp */
