//
//  main.cpp
//  q2.cpp
//
//  Created by Ana Zeneli on 3/30/16.
//  Copyright © 2016 Ana Zeneli. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>

const double STEP=0.2;

using namespace std;

double f(double x);

int main()
{
    double x= -5;
    cout<< fixed<< right<< showpoint<< setprecision(3);
    cout<<setw(5)<<'x'<<setw(14)<<"f(x)"<<endl;
    do
    {
        cout<<setw(7) << x<< setw(12)<<f(x)<<endl;
        x+= STEP;
    } while(x<= 2);
    cout<<endl;
}

double f(double x)
{
    double y;
    if(x>= -5 && x <= -2)
        y= 1- pow(x+3, 2);
    if (x> -2 && x <= 2)
        y= -pow(x,2) + 4;
    return y;
}
