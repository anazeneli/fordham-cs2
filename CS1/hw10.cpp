/*  ANA ZENELI
 hw10.cpp--CORRECTED
 4/28/16
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
const int SIZE = 15;
unsigned int seed = 0;

double random (unsigned int & seed);
char random_char();
void rotate_array (char a[], int pos);
void rotate_array_one_left(char a[]);
void rotate_array_one_right(char a[]);
void fill_array (char a[]);
void print_array ( char a[]);



int main()
{
    char a[SIZE];
    int pos;
    
    fill_array(a);
    print_array(a);
    
    cout<< "Enter positions to move: " ;
    cin>> pos;
    
    rotate_array(a,pos);
    print_array(a);
    
}

void fill_array (char a[])
{
    for(int i=0; i<SIZE; ++i)
        a[i]= random_char();
}

void print_array (char a[])
{
    for ( char i = 0; i < SIZE; ++i )
        cout<<left<< setw(3) << a[i];
    cout<<endl<<endl;
}

void rotate_array (char a[], int pos)
{
    int k = abs(pos);
    
    if (k< SIZE)
    {
        if (pos !=0)
        {
            if (pos < 0)
            {
                cout<< "rotating " << k << " position(s) left"<<endl;
                for(int i=0; i<k; ++i)
                    rotate_array_one_left(a);
            }
            else
            {
                cout<< "rotating " << k << " position(s) right"<<endl;
                for (int i=0; i< k; ++ i)
                    rotate_array_one_right(a);
            }
        }
    }
    else
        cout<< "No rotation required.";
}

void rotate_array_one_left(char a[])
{
    char temp_char= a[0];
    for(int i=0; i< SIZE; ++i)
        a[i]= a[i+1];
    a[SIZE - 1] = temp_char;
}

void rotate_array_one_right(char a[])
{
    char temp_char= a[SIZE-1];
    for(int i=SIZE -1; i< 0;--i)
        a[i]= a[i-1];
    a[0] = temp_char;
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


