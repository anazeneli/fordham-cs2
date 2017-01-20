// Ana Zeneli 2/3
//lab3.cpp
// Enter any three sides of any triangle and output the area 

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void get_data(double &a, double &b, double &c);
double triangle_area (double a, double b, double c);

int main()
{
    double a,b,c;
    get_data( a, b, c);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;
    cout<<"Area of the triangle= "<<triangle_area(a,b,c)<<endl;
    
    return 0;
}

double triangle_area(double a, double b, double c)
{
    double p;
    p=(a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

void get_data(double &a, double &b, double &c)
{
    cout<<"Enter three sides of a triangle."<<endl;
    cin >> a >> b >> c ;
}
