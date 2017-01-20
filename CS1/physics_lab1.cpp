//
//  physicslab1.cpp

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double standard_deviation_x ( double &a,double&b, double&c,double&v,double&u,double&w);

int main()
{
    double a,b,c, v, u , w;
    cout<< "Enter V, delta V, u, delta u, w, delta w"<<endl;
    cin>> v>>a>>u>>b>>w>>c;
    cout<<standard_deviation_x(a,b,c,v,u,w);
    
}

double standard_deviation_x ( double &a,double&b, double&c,double&v,double&u,double&w)
{
    return sqrt(pow((2/(47*u*w)),2)*pow(a,2) + pow((-2*v/(47*u*u*w)),2)*pow(b,2)+ pow(-2*v/(47*u*w*w),2)*pow(c,2));
}