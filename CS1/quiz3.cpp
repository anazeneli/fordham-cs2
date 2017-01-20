// Exercises: Arrays
// Exercise 3
// Print in two columns (even, odd) the elements that hold even and odd numbers 

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
const int SIZE=10;
unsigned int seed = 0;

void fill_array (int a[SIZE]);
double random (unsigned int & seed);
void print_array(const int a[SIZE]);

int main()
{
    int a[SIZE];
    fill_array(a);
    cout<< setw(4) << "Even " << '\t' << "Odd" << endl;
    print_array(a);
    
}

void fill_array (int a[])
{
    for (int i=0; i<SIZE; ++i)
        a[i] = 21*random(seed);
    
}

void print_array(const int a[])
{
    for (int i= 0; i< SIZE; ++i)
    {
        if (i % 2==0)
            cout<< left << setw(4) << a[i]<< '\t';
        else
            cout<< left<< setw(4)<< a[i] <<endl;
    }
    
}

double random (unsigned int & seed)
{
    const int MODULUS=15749;
    const int MULTIPLIER=69069;
    const int INCREMENT= 1;
    seed= ((MULTIPLIER * seed) + INCREMENT) % MODULUS;
    return double(seed)/double(MODULUS);
}