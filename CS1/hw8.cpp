//  ANA ZENELI
//  3/12/16
//  hw8.cpp

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;
const double ACC= 1e-9;
const int NEG= 1e8;
unsigned int seed = 0;
void swap (double &a, double &b);
double random (unsigned int & seed);
double f(double &x);
double bisection(double &xl, double &xr);
bool opposite_function_value (double &x, double &y);


int main()
{
    double xl, xr, xm;
    xr= rand() * random(seed);
    
    do
    {
        xl= rand()*random(seed)-NEG;
    } while (opposite_function_value(xl, xr) ==0);
        
    
    if (xl > xr)
        swap (xl, xr);
    
    do
    {
        xm= bisection(xl, xr);
        if (opposite_function_value (xm, xl))
            swap (xr, xm);
        else
            if (opposite_function_value (xm, xr))
                swap (xl, xm);
    } while ( abs(f(xm)) > ACC );
    
    cout<< "ZERO: " << xm << endl;
}

bool opposite_function_value(double &x, double &y)
{
    return (f(x)* f(y) < 0 );
}

double f(double &x)
{
    return x*(x-7)*(x+1);
}

double bisection(double &xl, double &xr)
{
    return (xl + xr)/2;
}

void swap (double &a, double &b)
{
    double temp;
    temp= a;
    a= b;
    b=temp;
}

double random (unsigned int & seed)
{
    const int MODULUS=15749;
    const int MULTIPLIER=69069;
    const int INCREMENT= 1;
    seed= ((MULTIPLIER * seed) + INCREMENT) % MODULUS;
    return double(seed)/double(MODULUS);
}
