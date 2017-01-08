//  Ana Zeneli
//  university_program.cpp
//  10/4/16
//
//  Created by Ana Zeneli on 9/30/16.
//  Copyright © 2016 Ana Zeneli. All rights reserved.
//

#include <iostream>
#include "university.hpp"
using namespace std;

void get_data( int &campus_i, int &degree_i, string &major_i, string &minor_i);

int main()
{
    Program student;
    int camp, deg;
    string maj, min;
    
    get_data(camp, deg, maj, min);
    Program myProgram(camp, deg, maj, min);
    /*
     student.set_campus(camp);
     student.set_degree(deg);
     student.set_major(maj);
     student.set_minor(min);
     */
    myProgram.Print();
    
    return 0;
}

void get_data( int &campus_i, int &degree_i, string &major_i, string &minor_i)
{
    // input campus
    cout << "Enter your home campus:\n" ;
    cout << "Campus choices: " << endl;
    cout << "   1: Lincoln Center" << endl;
    cout << "   2: Rose Hill"      << endl;
    cout << "   3: Westchester"    << endl;
    cin >> campus_i;
    
    while ( campus_i < 1 || campus_i > 3)
    {
        cout << "Please enter a valid campus: " << endl;
        cin >> campus_i;
    }
    // input degree
    cout << "Enter your degree:\n" ;
    cout << "Degree Choices:" << endl;
    cout << "   1: BS \n";
    cout << "   2: BA\n";
    cin >> degree_i;
    
    while ( degree_i < 1 || degree_i > 2)
    {
        cout << "Please enter a valid degree: " << endl;
        cin >> degree_i;
    }
    
    // input major
    cout << "Enter your major:\n" ;
    cout << "If undeclared, type UNDECLARED:" << endl;
    cin.ignore();
    getline(cin, major_i);
    
    // input minor
    cout << "Enter your minor:\n" ;
    cout << "If no minor, type NONE: " << endl;
    getline(cin, minor_i);
}
