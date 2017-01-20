/*  ANA ZENELI
    4/21/16
    extracredit2.cpp
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

const int SIZE = 10000;
unsigned int seed = (unsigned int) time(0);
double x, y, z;
int Rcount, Acount, Ecount;
double THICK= 4.25;

double random (unsigned int & seed);
void sum_arrays(const double a[SIZE], const double b[SIZE], const double c[SIZE],const double d[SIZE],const double e[SIZE],const double f[SIZE],const double g[SIZE], double SUM[SIZE]);
void fill_array (double a[SIZE]);
double entry_angle (double a);
double distance (double b);
double deflection_angle(double c, double def_angle);
double calculate_distance (double a, double b, double c);

int main()
{
    double a[SIZE], b[SIZE], c[SIZE], d[SIZE], e[SIZE], f[SIZE], g[SIZE], SUM[SIZE];
    fill_array(a);
    fill_array(b);
    fill_array(c);
    fill_array(d);
    fill_array(e);
    fill_array(f);
    fill_array(g);
    sum_arrays( a, b, c, d, e, f, g, SUM);
    cout<< setw(6)<< "ABSORBED  " << Acount <<endl;
    cout<< setw(6)<< "ESCAPED   " << Ecount <<endl;
    cout<< setw(6)<<  "Suggested wall thickness: " << THICK<< endl<< endl;
    
    return 0;
}

void sum_arrays(const double a[SIZE], const double b[SIZE], const double c[SIZE],const double d[SIZE],const double e[SIZE],const double f[SIZE], const double g[SIZE],double SUM[SIZE])
{
    for (int i = 0; i < SIZE; ++i )
    {
        SUM[i]=a[i]+b[i]+c[i]+d[i]+e[i]+f[i];
        
        if (SUM[i]< THICK)
            ++Acount;
        else
            ++Ecount;
    }
}

void fill_array (double a[])
{
    for (int i = 0; i < SIZE; ++i )
        a[i]= calculate_distance(x,y,z);
}

double calculate_distance (double x, double y, double z)
{
    double entryAngle;
    entryAngle = entry_angle(z);
    return distance(x)*cos(deflection_angle(y, entryAngle)- entry_angle(z));
}

double distance (double x)
{
    x= 1.1*random(seed) +0.6;
    return x;
}

double deflection_angle(double y , double entryAngle)
{
    return pow(-1, int(2*random(seed)))*(0.175+2.792*random(seed));
}

double entry_angle (double z)
{
    z= pow(-1, int(2*random(seed)))*(1.222*random(seed));
    return z;
}

double random (unsigned int & seed)
{
    const int MODULUS=15749;
    const int MULTIPLIER=69069;
    const int INCREMENT= 1;
    seed= ((MULTIPLIER * seed) + INCREMENT) % MODULUS;
    return double(seed)/double(MODULUS);
}
