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

Set::Set ( const Set &setToCopy): numElements(setToCopy.numElements)
{
    set = new int[numElements];
    
    for(int i =0 ; i < numElements; i++)
    {
        set[i] = setToCopy.set[i];
    }
}

Set:: ~Set()
{
    if(numElements == 0|| pSize == 0)
        delete set;

    //cout << "DESTRUCTOR CALLED " << endl;

}

Set Set::operator+ (Set &s)                         // set3 = set1 + set2;
{
    Set union_set(numElements);

    union_set = this -> Union(s);                   // this = set1
    
    cout << "The union of " ;
    this -> display();
    cout << "         and " ;
    s.display();
    cout << endl;
    cout << "         is: " ;
     
    union_set.display();
    cout << endl;
    
    return union_set;
    
}

Set Set::Union( Set &B )
{
    Set C(numElements);
    
    for ( int i = 0; i < numElements; i++)              // initialize C to the set that's being called
        C.insert(set[i]);
    
    for ( int j = 0; j < B.pSize; j++)                  // ensure you only check against the size of the parameter array
        C.insert(B.set[j]);                             // check that new element is not already a member
                                                        // insert new element; each time, insert function increases numElements of set1
    return C;
}


Set Set::operator^ (Set &s)
{
    Set intersection(numElements);
    
    intersection = this-> Intersection(s);
    
    
    cout << "The intersection of " ;
    this -> display();
    cout << "                and " ;
    s.display();
    cout << endl;
    cout << "                is: " ;
    
    intersection.display();
    cout << endl;
    
    return intersection;
    
}

Set Set::Intersection( Set &B )
{
    int new_size = B.numElements;
    Set C(new_size);
    
    for ( int i = 0; i < new_size; i++ )
    {
        if( element(B.set[i]))
        {
             C.insert(B.set[i]);
        }
        else
        {
            --new_size;
            continue;
        }
    }
        
    return C;
}

Set Set:: operator+( int n)
{
    Set C(numElements);
    
    for(int i = 0; i < numElements; ++i)
        C.insert(set[i]);
    
    C.insert(n);
 
    return C;
}

void Set::ResizeArray(int num)
{
    pSize = numElements + num;
    int *resized = new int[pSize];
    
    for (int i = 0; i < numElements; i ++)
        resized[i] = set[i];
    
    for (int i = numElements; i < pSize; i ++)
        resized[i] = 0;
    
    set = resized;
}

bool Set:: insert (int n)
{
    bool status;
    
    if(numElements == pSize)
        ResizeArray(DEFAULT_SIZE);
    
    if ( element(n))
    {
        status = false;
    }
    else
    {
        ++numElements;
        set[numElements -1] = n;
        status = true;
    }
    
    return status;
}

void Set::get_data()
{
    int num, n ;
    cout << "Enter the number of elements " ;
    cin >> num;
    
    if(num + numElements > pSize)
        ResizeArray(num);
    
    cout << "Enter the elements " ;
    for(int i = 0; i < num ; ++i )
    {
        cin >> n ;
        insert(n);
    }
}

bool Set:: element(int n)
{
    int status = 0;
    
    for(int i = 0; i < numElements ; ++i)
    {
        if ( n == set[i])
            status = 1;
    }
    
    return status;
}

void Set:: display()
{
    cout << "{ " ;
    for(int i = 0; i < numElements ; ++i)
        if( i == (numElements -1))
            cout << set[i];
        else
            cout << set[i] << ", ";
    
    cout << " }" << endl;
}

int Set:: get_size() const
{
    return pSize;
}
