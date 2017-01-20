//
//  main.cpp
//  bisection.cpp
//
//  Created by Ana Zeneli on 4/8/16.
//  Copyright © 2016 Ana Zeneli. All rights reserved.
//

#include <iostream>
#include <iomanip> 
#include <cmath> 
using namespace std;
const double ACC= 1e-9;
double f(double &x);

int main()
{
    double a, b, c;
    cout<< " Enter a, b  " ;
    cin>> a >> b;
    cout<< "Functions " << f(a) << "  " << f(b)<< endl;
    c=(a+b)/2;
    if (f(a)*f(b) < 0)
        cout<< "Functions " << f(a) << "  " << f(b)<< endl;
        do
        {
            if (f(c) == 0 )
                cout<< " ZERO AT " << c <<endl;
            if (f(a)*f(c) < 0)
            {    b= c;
            }
            else
                if (f(b)*f(c) < 0 )
                {
                    a=c;
                    cout<< "A " << a << "C " << c << endl;
                }
            
            cout<< '\t' << f(c) << endl;
            
        } while ( abs(b-a) > ACC );
    
    return 0;
}

double f(double &x)
{
    return x*(x-7)*(x+1);
}

double mid(double &a, double &b)
{
    return (a+b)/2;
}