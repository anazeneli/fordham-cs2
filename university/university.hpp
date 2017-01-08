//  university.hpp
//  university

#ifndef university_hpp
#define university_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Program
{
private:
    int campus;
    int degree;
    string major;
    string minor;
public:
    Program();
    Program(int , int , string , string );
    void set_campus(int);
    void set_degree(int);
    void set_major(string);
    void set_minor(string);
    void Print();
    
    int get_campus() const
    {
        return campus;
    }
    int get_degree() const
    {
        return degree;
    }
    
    string get_major() const
    {
        return major;
    }

    string get_minor() const
    {
        return minor;
    }
};

#endif /* university_hpp */
