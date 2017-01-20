/*  ANA ZENELI
 hw7.cpp
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const int SIZE=20;
unsigned int seed = 0;
double random(unsigned int & seed);

int main()
{
    int max_int=0;
    int a[SIZE];
    
    
    for(int i=0; i<SIZE; ++i)
    {
        a[i]= int(21*random(seed));
        cout<<left << setw(3)<< a[i];
    }
    cout<< endl;
    for(int i=0; i< SIZE; ++i)
        if (a[i] > max_int)
            max_int=a[i];
    
    for(int i=0; i<SIZE; ++i)
        if (a[i] == max_int)
            cout<<"Position of max int:" << i<<endl;
}


double random (unsigned int & seed)
{
    const int MODULUS=15749;
    const int MULTIPLIER=69069;
    const int INCREMENT= 1;
    seed= ((MULTIPLIER * seed) + INCREMENT) % MODULUS;
    return double(seed)/double(MODULUS);
}