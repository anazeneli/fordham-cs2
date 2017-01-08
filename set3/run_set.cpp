//  Ana Zeneli
//  run_set.cpp
//  11/10/16

#include <iostream>
#include "Set.hpp"
using namespace std;

void get_element(int &n);

int main()
{
    Set set1, set3;
    int n;
    
    cout << "Set 1: " ;
    for(int i = 1; i < 8 ; ++i)             // create set1 using a for loop; shows that numbers added aren't repeated
    {
        if( i > 5)
            set1.insert( i - i/2 );
        else
            set1.insert(i);
    }
    
    set1.display();                         // display looped element values

    /*
    set1.get_data();                        // Ask user to input values
    cout << "Set 1: " ;
    set1.display();                         // Ask user to input values
    */
    
    int a[5] = { 0, 3, 5, 7, 9 };
    int size =  sizeof(a) / sizeof(*a);     // get size of a given array
    
    cout << "Set 2: " ;
    Set set2(a, size);                      // use of constructor with array and size parameters
    set2.display();

    cout << endl;
    
    set3 = set1 + set2;                     // overload+ operator for union of two sets

    cout << "Union " ;                      // demonstrate the use of a copy constructor
    Set set4 = Set(set3);                   // store the copied union in set 4
    set4.display();
    cout << endl;

    set3 = set1 ^ set2;                     // overload^ operator for intersection of two sets
    
    cout << "Intersection " ;
    set3.display();
    cout << endl;

    get_element(n);
    set1 = set1 + n;                       // overload+ operator for addition of new element to set

    cout << "New Set: " ;
    set1.display();
    
    return 0;
}

void get_element(int &n)
{
    cout << "Enter the element you would like to add to the set: " ;
    cin >> n;
    
}
