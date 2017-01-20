/*ANA ZENELI
 l10.cpp
 4/27/16
 */


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

unsigned int seed = 0;

int random_int();
double random (unsigned int & seed);
int positive_integer();
int sum(int n);


int main()
{
    int k;
    k= positive_integer();
    cout<< endl;
    cout<< "The sum is " << sum(k)<<"."<<endl<<endl;
    return 0;
}

int positive_integer()
{
    int n;
    do
    {
        cout<< "Enter a positive integer: ";
        cin>> n;
        
    } while(n<= 0);
    
    return n;
}

int sum(int n)
{
    if (n== 1)
        return 1;
    else
        return n + sum(n-1); 
}
