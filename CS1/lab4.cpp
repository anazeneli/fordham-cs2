/*
 Ana Zeneli
 lab4.cpp
 2/17/16
 
 Write a swap function that collects three numbers and outputs them from smallest to largest 
 */

#include <iostream>
#include <iomanip>

using namespace std;

void get_data (double &a, double &b, double &c);
void order(double &a, double &b, double &c);
void swap ( double &a, double &b);

int main()
{
    double a, b, c;
    get_data (a, b ,c);
    order (a, b, c);
    cout<< "a=" << a << endl;
    cout<< "b=" << b << endl;
    cout<< "c=" << c<< endl;
}

void order(double &a, double &b, double &c)
{
    if (a >b)
        swap (a, b);
    if (b > c)
        swap( b, c);
    if (b < a)
        swap( b, a);
}

void swap ( double &a, double &b)
{
    double temp;
    temp=a;
    a=b;
    b=temp;
}

void get_data (double &a, double &b, double &c)
{
    cout<<"Enter three numbers"<<endl;
    cin>>a>>b>>c;
}
