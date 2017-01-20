//  Created by Ana Zeneli on 2/20/16.
//  hw3.cpp

#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;

void get_data(double &a, double &b, double &c);

int main()
{
    double a, b, c, x1, x2;
    double disc= b*b -4*a*c;

    get_data( a, b, c);
    
    if (a==0)
        cout<< "Not a quadratic equation." <<endl;
    else
    {
        if(disc >=0)
        {
            if(b*b > 20*(4*a*c))
            {
                x1= -b - sqrt(disc)/2*a;
                x2= -b + sqrt(disc)/2*a;
            }
            else
                cout<< "x1= " << x1 << endl<< "x2= " << x2<< endl;
        }
        else
            cout<< "No real roots." <<endl;
    }
  
    
    return 0;
}


void get_data(double &a, double &b, double &c)
{
    cout<<"Enter the three coefficients of the quadratic formula."<<endl;
    cin >> a >> b >> c ;
}


