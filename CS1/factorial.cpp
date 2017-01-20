//  ANA ZENELI
//  4/18/16
//  factorial.cpp

#include <iostream> 
#include <iomanip>

using namespace std;

int factorial (int n);

int main()
{
    int k;
    cout<< "Enter the factorial you wish to compute: ";
    cin>> k;
    cout<<factorial(k)<<endl;
}

int factorial (int n)
{
    if (n==0)
        return 1;
    else
        return n*factorial(n-1);
}