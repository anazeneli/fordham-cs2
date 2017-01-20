/*
 Ana Zeneli
 lab5.cpp
 3/2/16
 
 Write a program to calculate the area of a circle by generating 10000 points within the unit circle
 */

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <cmath>

using namespace std;

const int Total_Points=10000;
unsigned int seed = 0;
double random(unsigned int & seed);

int main()
{
    double x, y;
    int count= 0;
    for (double i= 0; i<= Total_Points; ++i)
    {
        x= random(seed);
        y= random(seed);
        cout << x << " " << y << endl;
        
        if( sqrt( x*x + y*y ) < 1 )
            ++count;
        cout<<count<<endl;
        
        
    }
    cout<<count<<endl;
    cout<<fixed<<setprecision(5)<<endl;
    cout<<"PI= "<< 4 * double (count)/Total_Points<<endl;
    
    return 0;
}

double random (unsigned int & seed)
{
    const int MODULUS=15749;
    const int MULTIPLIER=69069;
    const int INCREMENT= 1;
    seed= ((MULTIPLIER * seed) + INCREMENT) % MODULUS;
    return double(seed)/double(MODULUS);
}