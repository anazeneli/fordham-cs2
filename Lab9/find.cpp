// This program identifies whether user's input is within the entered array.

// Ana Zeneli
// find.cpp
// 10/11/16
// find.cpp

#include <iostream> 
using namespace std;

int main()
{
    int *array = nullptr;	// a pointer used to point to an array
    int number;
    int *search;
    search = new int;
    cout << "Please input the number of id numbers to be read" << endl;
    cin >> number;

    if (number < 1)
        cout << "Cannot process numbers 0 or smaller!" << endl;
    
    array = new int[number];

    for(int i=0; i < number; ++i)
    {
        cout << "Please enter an id number " << endl;
        cin >> *(array + i);
        cout << endl;
    }
    
    cout << "Please input an id number to be searched " << endl;
    cin >> *search;
    
    for(int i=0; i < number; ++i)
    {
        if ( *search == *(array+1) )
        {
            cout << *search << " is within the array." << endl;
            break;
        }
        else
        {
            cout << *search << " is not within the array." << endl;
            break;
        }
    }

    return 0;
}


/*
 Option 2: This program will read in id numbers and place them in an array. The array is dynamically allocated large enough to hold the number of id numbers given by the user. The program will then input an id and call a function to search for that id in the array. It will print whether the id is in the array or not.
 Sample Run:
 Please input the number of id numbers to be read
 4
 Please enter an id number
 96
 Please enter an id number
 97
 Please enter an id number
 98
 Please enter an id number
 99
 Please input an id number to be searched
 67
 67 is not in the array
 */
