//  Set.hpp

#ifndef Set_hpp
#define Set_hpp

#include <iostream>
#include <stdio.h>

using namespace std;

class Set
{
private:
    int *set;                                                               // pointer to a dynamically allocated array of integers
    int pSize;                                                              // represents the actual physical size of the array
    int numElements;                                                        // represents the numser of elements in the array
    static const int DEFAULT_SIZE = 5;

public:
    Set(int n = DEFAULT_SIZE);                                              // default constructor
    Set( int arr[], int size );                                             // constructor that accepts an array as an argument
    Set ( const Set &setToCopy);                                            // copy constructor
    ~Set();                                                                 // destructor

    Set Union(Set &s);
    Set Intersection(Set &s);
    Set Difference(Set &s);
    bool Equality(Set &s);
    bool Inequality(Set &s);
    
    Set operator+   (Set &s);                                               //to represent union of two sets
    Set operator^   (Set &s);                                               //to represent intersection of two sets
    Set operator-   (Set &s);                                               // set3 = set1 + set2;
    void operator== (Set &s);                                               // test for set equality
    void operator!= (Set &s);                                               // test for set inequality

    Set operator+ ( int n);                                                 //represents the addition of a new element
    Set operator- ( int n);                                                 //represents the sustraction of a new element

    friend istream &operator >> (istream &in, Set &s);                      //represents the input method
    friend ostream &operator << (ostream &out, const Set s);                //represents the display method
    
    void ResizeArray(int num);
    bool insert (int n);                                                    // inserts a single element to the array; no duplicates
    bool remove (int n);                                                    // removes a single element in the array
    bool element(int n);                                                    // boolean check that an integer is a member of the array
};

#endif /* Set_hpp */
