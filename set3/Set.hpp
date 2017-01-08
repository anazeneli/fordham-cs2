//  Set.hpp

#ifndef Set_hpp
#define Set_hpp

#include <stdio.h>

class Set {
    
private:
    int *set;                               // pointer to a dynamically allocated array of integers
    int pSize;                              // represents the actual physical size of the array
    int numElements;                        // represents the number of elements in the array
    static const int DEFAULT_SIZE = 5;

public:
    Set(int n = DEFAULT_SIZE);              // default constructor
    Set( int arr[], int size );             // constructor that accepts an array as an argument
    Set ( const Set &setToCopy);            // copy constructor
    ~Set();                                 // destructor

    Set Union(Set & B );
    Set Intersection(Set & B);
    
    Set operator+ ( Set &s );               //to represent union of two sets
    Set operator^ ( Set &s );               //to represent intersection of two sets
    Set operator+ ( int n);          //represents the addition of a new element
    
    void ResizeArray(int num);
    bool insert (int n);                    // inserts a single element to the array; no duplicates
    bool element(int n);                   // boolean check that an integer is a member of the array
    void get_data ();                       // get user input for desired element insertion
    int get_size() const;                   // displays the physical size of an array
    void display();                         // displays any set created

};

#endif /* Set_hpp */

/*
 
 copy constructor
 destructor
 bool insert (int n);
 bool element(int n);
 void display();
 
 */

