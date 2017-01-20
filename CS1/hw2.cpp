/*
 homework2.cpp
 Created by Ana Zeneli on 2/12/16.
 Copyright © 2016 Ana Zeneli. All rights reserved.
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void get_data (double &a, double &b, double &c);

int main()
{
    double a,b,c;
    get_data (a, b, c);
    
    if ((a+b > c) && (b+c > a) && (a+c > b))
        cout<< "Yes, these sides form a triangle." <<endl;
    else
        cout<< "No, these sides do not form a triangle." <<endl;
    
    
    return 0;
}


void get_data (double &a, double &b, double &c)
{
    cout<<"Enter three sides that make up a triangle:";
    cin>> a>> b>> c ;
}