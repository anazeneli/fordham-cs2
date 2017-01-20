//  Ana Zeneli
// 3/16/15
// calculate a,b,c,d such that 


#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int a,b,c,d,n;
int max_int = 10;

int main()
{
    cout << fixed << showpoint << setprecision (5);
    for (int a = 1; a <= max_int; ++a)
        for (int b = 1; b <= max_int; ++b)
            for (int c = a+1; c <= max_int; ++c)
                for (int d = c+1; d <= max_int; ++d)
                    if ((a*a)+(b*b)==(c*c)+(d*d))
                    {
                        cout << "a= " << a << endl;
                        cout << "b= " << b << endl;
                        cout << "c= " << c << endl;
                        cout << "d= " << d << endl;
                        cout << "n= " << (a*a)+(b*b) << endl;
                        return 0;
                    }
}
