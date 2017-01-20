// ANA ZENELI
// l9.cpp
// Create a function that outputs the sum of two arrays 

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

using namespace std;

const int SIZE = 5;
unsigned int seed = 0;

int random_int();
double random (unsigned int & seed);
void sum_arrays(const int a[][SIZE], const int b[][SIZE], int c[][SIZE]);
void fill_array (int a[][SIZE]);
void print_array (const int a[][SIZE]);

int main()
{
    int a[SIZE][SIZE];
    int b[SIZE][SIZE];
    int c[SIZE][SIZE];
    
    fill_array(a);
    print_array(a);
    cout<<endl;
    
    fill_array(b);
    print_array(b);
    cout<<endl;
    
    sum_arrays(a,b,c);
    print_array(c);
    cout<<endl;
    
    return 0;
}

int random_int()
{
    return int(6*random(seed));
}

void sum_arrays(const int a[][SIZE], const int b[][SIZE], int c[][SIZE])
{
    for (int row = 0; row < SIZE; ++row )
        for( int col= 0; col < SIZE; ++col)
            c[row][col]=a[row][col]+b[row][col];
}

void fill_array (int a[][SIZE])
{
    for (int row = 0; row < SIZE; ++row )
        for( int col= 0; col < SIZE; ++col)
            a[row][col]= random_int();
}
void print_array (const int a[][SIZE])
{
    for (int row = 0; row < SIZE; ++row )
    {
        for( int col= 0; col < SIZE; ++col)
            cout<< setw(4) << a[row][col];
        cout<<endl;
    }
    cout<<endl;
}

double random (unsigned int & seed)
{
    const int MODULUS=15749;
    const int MULTIPLIER=69069;
    const int INCREMENT= 1;
    seed= ((MULTIPLIER * seed) + INCREMENT) % MODULUS;
    return double(seed)/double(MODULUS);
}

