#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

const int SIZE = 15;
unsigned int seed = 0;

char random_char();
double random (unsigned int & seed);
void compare_arrays( const char a[], const char b[], char c[]);
void fill_array ( char a[]);
void print_array ( char a[]);

int main()
{
    char a[SIZE];
    char b[SIZE];
    char c[SIZE];
    
    fill_array(a);
    print_array(a);
    fill_array(b);
    print_array(b);
    compare_arrays(a,b,c);
    print_array(c);
}

char random_char()
{
    return char(int (97+ 26*random(seed)));
}

void fill_array (char a[])
{
    for (char i = 0; i < SIZE; ++i )
        a[i] = random_char();
}
void print_array ( char a[])
{
    for ( char i = 0; i < SIZE; ++i )
        cout<< setw(3) << a[i];
    cout<<endl;
}

void compare_arrays(const char a[], const char b[], char c[])
{
    for ( char i = 0; i <= SIZE; ++i )
        if (a[i] >= b[i])
            c[i] = '+';
        else
            c[i] = '-';
}

double random (unsigned int & seed)
{
    const int MODULUS=15749;
    const int MULTIPLIER=69069;
    const int INCREMENT= 1;
    seed= ((MULTIPLIER * seed) + INCREMENT) % MODULUS;
    return double(seed)/double(MODULUS);
}
