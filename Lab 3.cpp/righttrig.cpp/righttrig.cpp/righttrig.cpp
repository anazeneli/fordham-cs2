//  Ana Zeneli
//  main.cpp
//  righttrig.cpp

#include <iostream>
#include <cmath> 
#include <iomanip>

using namespace std;


int main()
{
    float a,b; // the smaller two sides of the triangle
    float hyp; // the hypotenuse calculated by the program
    
    cout << "Please input the value of the two sides" << endl;
    cin >> a >> b;
    
    hyp = sqrt(pow(a,2) + pow(b,2));
    
    cout << "The sides of the right triangle are " << a << " and " << b << endl;
    cout << fixed << setprecision(2)<< "The hypotenuse is " << hyp << endl;
    
    return 0;
}