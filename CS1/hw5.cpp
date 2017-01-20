//  hw5.cpp
//  Created by Ana Zeneli on 3/3/16

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <cmath>

using namespace std;

const int Total_Points = 10000;
unsigned int seed = 0;
double random(unsigned int & seed);
double random_0_2 ();
double random_0_8 ();


int main()
{
    double x, y, function;
    int count = 0;
    for (double i = 1; i <= Total_Points; ++i)
    {
        x= random_0_2();
        y= random_0_8();
        function= x*x*x;
        
        if (y <= function)
            ++count;
    }
    
    cout<<fixed<<setprecision(5)<<endl;
    cout<<count<<endl;
    cout<< "Integral of x^3 = " << 16 * (double (count)/ Total_Points) << endl;
    return 0;
}

double random_0_2 ()
{
    return 2*random(seed);
}

double random_0_8 ()
{
    return 8*random(seed);
}

double random (unsigned int & seed)
{
    const int MODULUS=15749;
    const int MULTIPLIER=69069;
    const int INCREMENT= 1;
    seed= ((MULTIPLIER * seed) + INCREMENT) % MODULUS;
    return double(seed)/double(MODULUS);
}
