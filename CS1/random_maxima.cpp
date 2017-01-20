//
//  random_maxima.cpp
//
//  Created by Ana Zeneli on 2/21/16.
//  Copyright © 2016 Ana Zeneli. All rights reserved.
//


#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <cmath>

using namespace std;

unsigned int seed = 0;
double random(unsigned int & seed);
double random_0_25 ();

int main()
{
    double x, smallest=INT_MAX, largest=INT_MIN;
    int count= 0;
    for (double i= 0; i< 1000; ++i)
    {
        x= random_0_25 ();
        ++count;
        if (x< smallest)
            smallest = x;
        if (x> largest)
            largest = x;
        cout<<x<<endl;
        
    }
    cout<<"Smallest= "<<smallest<< '\n'<< "Largest= " <<largest<<endl;
    cout<<fixed<<setprecision(5)<<endl;
    
    return 0;
}

double random_0_25 ()
{
    return 25*random(seed);
}

double random (unsigned int & seed)
{
    const int MODULUS=15749;
    const int MULTIPLIER=69069;
    const int INCREMENT= 1;
    seed= ((MULTIPLIER * seed) + INCREMENT) % MODULUS;
    return double(seed)/double(MODULUS);
}
