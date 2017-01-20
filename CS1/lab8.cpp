#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 15;
unsigned int seed = 0;

char random_char();
double random (unsigned int & seed);
void fill_array (char a[]);
void compare_array(const char a[], const char b[], char c[]);
void print_array (char a[]);

int main ()
{
    char a [SIZE];
    char b [SIZE];
    char c[SIZE];
    
    fill_array(a);
    print_array(a);
    fill_array(b);
    print_array(b);

    compare_array(a,b,c);

    cout<< endl;
}

void compare_array(const char a[], const char b[], char c[])
{
    for ( char c= 'a' ; c <= 'o'; ++c)
    {
        if ( a[c] >= b[c] )
            cout << setw(4)<< "+";
        else
            cout << setw(4) << "-";
    }
}

void fill_array (char a[])
{
    for ( char c = 'a' ; c <= 'o'; ++c )
    {
        a[c]= random_char();
    }
}

void print_array (char a[])
{
    for ( char c = 'a' ; c <= 'o'; ++c )
    {
        cout<<left<< setw(4)<< a[c];
    }
    cout<<endl;
}

char random_char()
{
    return char(int (97+ 26*random(seed)));
}

double random (unsigned int & seed)
{
    const int MODULUS=15749;
    const int MULTIPLIER=69069;
    const int INCREMENT= 1;
    seed= ((MULTIPLIER * seed) + INCREMENT) % MODULUS;
    return double(seed)/double(MODULUS);
}	

