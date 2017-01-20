/*  ANA ZENELI
    hw11.cpp
    4/28/16
    Recursively rotate array left or right. 
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const int SIZE = 15;
unsigned int seed = 0;
int pos;

void rotate_array (char a[], int pos, int n);
void rotate_array_one_right(char a[], int n);
void get_data(int &pos);
void print_direction(int pos);
void fill_array (char a[], int n);
void print_array (const char a[], int n);
void swap(char &a, char &b);
double random (unsigned int & seed);
char random_char();

int main()
{
    char a[SIZE];
    
    fill_array(a, 0);
    print_array(a, 0);
    cout<<endl<<endl;
    
    get_data(pos);
    print_direction(pos);

    rotate_array(a,pos, 0);
    print_array(a, 0);
    cout<<endl<<endl;
}

void rotate_array (char a[], int pos, int n)
{
    int k = abs(pos);
    if (pos != 0)
    {
        if (n<k)
        {
            rotate_array_one_right(a, SIZE - 1);
            if(pos < 0)
            {
                int temp_k = SIZE + pos;
                rotate_array(a, temp_k, n+1);
            }
            else
                rotate_array(a, pos, n+1);
        }
    }
    else
        cout<< "No rotation required." << endl;
    
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

void get_data(int &pos)
{
    do
    {
        cout<< "Enter a direction to move: ";
        cin>> pos;
    } while (abs(pos) > SIZE);
}

void print_direction(int pos)
{
    if (pos < 0)
        cout<< "Rotating " << abs(pos) << " position(s) left."<<endl<<endl;
    else
        if (pos > 0)
            cout<< "Rotating " << pos << " position(s) right"<<endl<<endl;
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
