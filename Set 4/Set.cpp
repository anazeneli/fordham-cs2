//  Set.cpp

#include "Set.hpp"
#include <iostream> 
using namespace std;

//Default constructor to initialize the set to the empty set.
Set:: Set(int n)
{
    set = new int[n];
    pSize = n;
    numElements = 0;
}

Set:: Set( int arr[], int size )
{
    pSize = size;

    set = new int[pSize];
    set = arr;
    
    numElements = pSize;
}
// copy constructor
Set::Set ( const Set &setToCopy): numElements(setToCopy.numElements)
{
    set = new int[numElements];
    pSize = numElements;
    
    for(int i = 0 ; i < numElements; i++)
        set[i] = setToCopy.set[i];
}

// destructor
Set:: ~Set()
{
    // cout << "DESTRUCTOR CALLEED " << endl;
    // delete[] set;
}

Set Set::Union( Set &s )
{
    Set unite(numElements);
    
    for ( int i = 0; i < numElements; i++)                          // initialize C to the set that's seing called
        unite.insert(set[i]);
    
    for ( int j = 0; j < s.pSize; j++)                              // ensure you only check against the size of the parameter array
        unite.insert(s.set[j]);                                     // check that new element is not already a member
                                                                    // insert new element; each time, insert function increases numElements of set1
    return unite;
}

Set Set::Intersection( Set &s )
{
    int new_size = s.numElements;
    Set intersect(new_size);
    
    for ( int i = 0; i < new_size; i++ )
    {
        if( element(s.set[i]))
        {
            intersect.insert(s.set[i]);
        }
        else
        {
            --new_size;
            continue;
        }
    }
    
    return intersect;
}

Set Set::Difference(Set &s)                                         // This method creates a new set that
{                                                                   // the difference of two sets and returns the new set
    Set dif(numElements);
    
    for ( int i = 0; i < numElements; i++)                          // initialize C to the set that's seing called
        dif.insert(set[i]);
    
    for(int i =0; i < s.numElements; ++i)
        dif.remove(s.set[i]);
    
    dif.numElements = dif.pSize;
    
    return dif;
}

bool Set:: Equality( Set &s )                                       // This method determines whether the two sets are equal
                                                                    // and return true or false accordingly.
{
    int count = 0;
    bool status = false;
    
    if(numElements == s.numElements)
    {
        for(int i = 0; i < numElements; ++i)
            for(int j = 0; j < numElements; ++j)
                if( set[i] == s.set[j] )
                    ++count;
        
        if (count == numElements)
            status = true;
    }
    else
        status = false;
    
    return status;
}

bool Set:: Inequality(Set &s )                                      // This method determines whether the two sets are not equal
{                                                                   // and returns true or false accordingly.
    int count = 0;
    bool status = true;
    
    if(numElements != s.numElements)
        status = true;
    else
    {
        for(int i = 0; i < numElements; ++i)
            for(int j = 0; j < numElements; ++j)
                if( element(s.set[j]))
                    ++ count;
                
        if( count > 0 )
            status = false;
    }

    return status;
}

Set Set::operator+ (Set &s)                                         // set3 = set1 + set2;
{
    Set union_set(numElements);
    
    union_set = this -> Union(s);                                   // this = set1
    
    return union_set;
}

Set Set::operator^ (Set &s)
{
    Set intersection(numElements);
    
    intersection = this -> Intersection(s);
    
    return intersection;
}

Set Set::operator- (Set &s)                                         // set3 = set1 + set2;
{
    Set difference(numElements);
   
    difference = this -> Difference(s);
    
    return difference;
}

void Set:: operator == (Set &s)
{
    if( this -> Equality(s) == true)
        cout << "Sets equal" ;
    else
        cout << "Sets unequal" ;
}

void Set:: operator != (Set &s)
{
    if( this -> Inequality(s) == true)
        cout << "Sets unequal" ;
    else
        cout << "Sets equal" ;
}

Set Set:: operator+( int n)
{
    Set C(numElements);
    
    for(int i = 0; i < numElements; ++i)
        C.insert(set[i]);
    
    C.insert(n);
    
    return C;
}

Set Set:: operator- (int n)
{
    if( remove(n) == true )
    {
        Set C(pSize);

        for(int i = 0; i < pSize; ++i)
            C.insert(set[i]);
        
        delete[] set;
        return C;
    }
    
    else
        return *this ;
}

istream &operator>> (istream &in, Set &s)                           //represents the input method
{
    int inputNum, n;
    cout << "Enter the number of elements to add " ;
    in >> inputNum;
    
    if( inputNum + s.numElements > s.pSize )
        s.ResizeArray(inputNum);
    
    cout << "Enter the elements                   ";
    
    for(int i = 0; i < inputNum ; ++i )
    {
        in >> n ;
        s.insert(n);
    }
    
    return in;
}

ostream &operator << ( ostream &out, const Set s )                  //represents the display method
{
    out << "{ ";
    
    for(int i = 0; i < s.numElements ; ++i)
    {
        if( i == (s.numElements -1))
            out << s.set[i]<< " ";
        else
            out << s.set[i]<< ", ";
    }
    
    out << "}" << endl;
    
    return out;
}

void Set::ResizeArray(int num)
{
    pSize = numElements + num;
    int *resized = new int[pSize];
    
    for (int i = 0; i < numElements; i ++)
        resized[i] = set[i];
    
    delete [] set;                                                  // delete set because it will be pointing to the new resized
    
    set = resized;
}

bool Set:: insert (int n)
{
    bool status;
    
    if(numElements == pSize)
        ResizeArray(DEFAULT_SIZE);
    
    if ( element(n))
        status = false;
    else
    {
        ++numElements;
        set[numElements -1] = n;
        status = true;
    }
    
    return status;
}


bool Set:: remove(int n)
{
    bool status;
    
    if( element(n) )
    {
        status = true;
        pSize = numElements -1;
        
        Set C(pSize);
        
        for(int i = 0; i < pSize; ++i)
            if( set[i] == n)                                        // locate element in set[i]
                for(int j = i; j < pSize; ++j)                      // use a for loop to shorten set[i]
                    set[j] = set[j+1];
        
        numElements = numElements -1;
    }
    else
        status = false;
    
    return status;
}

bool Set:: element(int n)
{
    bool status = false;
    
    for(int i = 0; i < numElements ; ++i)
    {
        if ( n == set[i])
            status = true;
    }
    
    return status;
}
