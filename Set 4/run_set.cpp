//  Ana Zeneli
//  run_set.cpp
//  11/15/16

#include <iostream>
#include "Set.hpp"
using namespace std;

int main()
{
    Set set1, set3, set4, set5, set6;
    int n;
    
    cout << "Set 1: " ;
    for(int i = 1; i < 8 ; ++i)             // create set1 using a for loop; shows that numsers added aren't repeated
    {
        if( i > 5)
            set1.insert( i - i/2 );
        else
            set1.insert(i);
    }

    cout << set1;                           // display looped element values
    
    int a[5] = { 0, 3, 5, 7, 9 };
    int size =  sizeof(a) / sizeof(*a);     // get size of a given array
    
    cout << "Set 2: " ;
    Set set2(a, size);                      // use of constructor with array and size parameters
    cout << set2 << endl;
    
    set3 = set1 + set2;                     // overload+ operator for union of two sets
    
    cout << "The union of " ;
    cout << set1 ;
    cout << "         and " ;
    cout << set2;
    cout << endl;
    cout << "         is: " ;
    
    set4 = Set(set3);                       // demonstrate the use of a copy constructor
    cout << set4;                           // store the copied union in set 4
    
    cout << endl;
    
    set5 = set1 ^ set2;                     // overload^ operator for intersection of two sets
    
    cout << "The intersection of " << set1;
    cout << "                and " << set2 << endl;
    cout << "                is: " ;
    
    cout << set5 << endl;
    
    set6 = set3 - set2;                     // overload- operator for difference between two sets
/*
    cout << "Set difference: " << endl;
    cout << "   " << set3 << " - " ;
    cout << set2 << endl << " = " ;
    cout << set6 << endl;
    
    cout << "Removing { 2 }" << endl;
    cout << "from " << set6;
    set6 = set6 - 2;
    cout << endl << set6 << endl;
    
    Set set7(set1);
    cout << "Test for Equality: " << endl;
    
    cout << set7 << set1;
    set7 == set1;                           // test overloading operator ==
    cout << endl << endl;
    
    cout << "Test for Inequality: " << endl;
    
    cout << set5 << set3;
    set5 != set3;                           // test overloading operator !=
    cout << endl << endl;
*/
    Set input;                              // test overloading operator >>
    cin  >> input ;
    cout << input;
    
    cout << "Enter an element to add to " << input ;
    cin  >> n;
    
    input = input + n;                      // overload+ operator for addition of new element to set

    cout << "Element addition: " ;
    cout << input << endl ;
    
    cout << "Enter an element to remove from " << input ;
    cin  >> n;
    
    cout  << "Element removal:  " ;
    input = input - n;
    cout  << input << endl ;

    
    return 0;
}
