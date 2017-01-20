/*  ANA ZENELI
 hw10.cpp--CORRECTED; recursively in both directions
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
void rotate_array (char a[], int pos, int n);
void rotate_array_one_left(char a[], int n);
void rotate_array_one_right(char a[], int n);
void fill_array (char a[], int n);
void print_array (const char a[], int n);
void get_data(int &pos);


int main()
{
    char a[SIZE];
    int pos;
    
    fill_array(a, 0);
    print_array(a, 0);
    cout<<endl<<endl;
    get_data(pos);
    
    rotate_array(a,pos, 0);
    print_array(a, 0);
    cout<<endl<<endl;
}

void rotate_array (char a[], int pos, int n)
{
    int k = abs(pos);
    if (k< SIZE)
    {
        if (pos !=0)
        {
            if (pos < 0)
            {
                cout<< "rotating " << k << " position(s) left"<<endl;
                
                if ( n < k)
                {
                    rotate_array_one_left(a, 0);
                    rotate_array(a, pos, n+1);
                }
            }
            else
            {
                cout<< "rotating " << k << " position(s) right"<<endl;

                if ( n < k)
                {
                    rotate_array_one_right(a, SIZE -1);
                    rotate_array(a, pos, n+1);
                }
            }
        }
        else
            cout<< "No rotation required."<<endl;
    }
}

void get_data(int &pos)
{
    cout<< "Enter positions to move: " ;
    cin>> pos;
}
void rotate_array_one_left(char a[], int n)
{
    char temp_char= a[0];
    if (n < SIZE)
    {
        swap( a[n], a[n+1]);
        rotate_array_one_left(a, n+1);
    }
    a[SIZE-1]= temp_char;
}

void rotate_array_one_right(char a[], int n)
{
    char temp_char = a[SIZE -1];
    if (n >= 0)
    {
        swap( a[n], a[n-1]);
        rotate_array_one_right(a,n-1);
    }
    a[0] = temp_char;
}

void fill_array (char a[], int n)
{
    if (n<SIZE)
    {
        a[n]=random_char();
        fill_array(a, n+1);
    }
}

void print_array (const char a[], int n)
{
    if (n< SIZE)
    {
        cout<<left << setw(3)<<a[n];
        print_array(a, n+1);
    }
}

void swap(char &a, char &b)
{
    char temp=a;
    a=b;
    b=temp;
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
