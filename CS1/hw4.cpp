//  Ana Zeneli
//  hw4.cpp
//  3/3/16

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const int STEP= 100;

double multiple(int n);

int main()
{
    double sum=0;
    cout<<fixed<<showpoint<<setprecision(8);
    cout<<left << setw(4)<< "n" << '\t'<< "Sum" <<'\n'<<'\n';
    for (int n = 100; n <= 1000; n += STEP)
    {
        for (int i=n-(STEP-1); i<=n; ++i)
            sum+=multiple(i);
        cout<<setw(4)<< n << '\t'<< sum-log(n)<<'\n';
    }
    
    return 0;
}

double multiple(int n)
{
    return 1/double(n);
}