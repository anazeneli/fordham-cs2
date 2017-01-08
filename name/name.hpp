//  name.hpp

#ifndef name_hpp
#define name_hpp

#include <stdio.h>
using namespace std;

class Name
{
private:
    string first_name;
    char middle_initial;
    string last_name;
public:
    Name();
    Name(string first, char middle, string last);
    void set_first_name(string);
    void set_middle_initial(char);
    void set_last_name(string);
    
    string get_first_name() const
    {
        return first_name;
    }
    
    string get_middle_initial() const
    {
        return &middle_initial;
    }
    string get_last_name() const
    {
        return last_name;
    }
};

#endif /* name_hpp */
