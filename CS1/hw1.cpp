//  ANA ZENELI
//  hw1.cpp
//  2/11/16
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, y;
    cout<< "Enter three numbers.\n (a and b must be positive)\n (a*c must be less than or equal to 1.)"<<endl;
    cin>>a>>b>>c;
    y=sqrt((log(a)-log(b)/(a-b))*cbrt((log10(a)-log10(b))/(a*b))-sqrt(sin(a*c)));
    cout<<fixed<<setprecision(8)<<endl;
    cout<<y<<endl;
    
    return 0;
}

