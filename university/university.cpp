//  Ana Zeneli
//  university.cpp
//  10/4/16

#include <iostream>
#include "university.hpp"
#include <string>
using namespace std;

Program::Program():campus(1), degree(1), major("Undeclared"), minor("none") {}
Program::Program( int camp, int deg, string maj, string min)
{
    campus = camp;
    degree = deg;
    major = maj;
    minor = min;
}
/*
void Program::set_campus(int home_campus)
{
    campus = home_campus;
}
void Program::set_degree(int temp_degree)
{
    degree = temp_degree;
}
void Program::set_major(string temp_major)
{
    major = temp_major;
}
void Program::set_minor(string temp_minor)
{
    minor = temp_minor;
}
*/
void Program::Print()
{
    cout << endl;
    cout << "Campus:\t" ;
    if (get_campus() == 1)
        cout << "Lincoln Center" << endl;
    else if (get_campus() == 2)
        cout << "Rose Hill" << endl;
    else if (get_campus() == 3)
        cout << "Westchester" << endl;
    
    cout << "Degree:\t" ;
    if( get_degree() ==1 )
        cout << "BS" << endl;
    else if (get_degree() == 2)
        cout << "BA" << endl;
    
    cout << "Major:  " << get_major() << endl;
    cout << "Minor:  " << get_minor() << endl;
}
