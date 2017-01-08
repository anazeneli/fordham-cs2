//  Ana Zeneli
//  run_polygon.cpp
//  10/17/16

#include <iostream>
#include "polygon.hpp"
using namespace std;

void get_data (int &a);
double average_area(double area, int num);
double average_perimeter(double perimeter, int num);
void print_averages(double &area, double &perimeter, int num);
void calculate_averages(Polygon *polyArrPtr[], double &a, double &p, int &size );
void account_summary(Polygon *array[], int &size );
void remove_object_array( Polygon *array[], int &size);

int main()
{
    double total_area = 0, total_perimeter = 0 ;
    int MAX = Polygon:: getMaxPolygons();
    int NEW_MAX = MAX -1;
    
    Polygon poly1(1, 4);                   // each constructor sets each instance
    Polygon poly2(2, 2);
    Polygon poly3(3, 3);
    Polygon poly4(4, 4);
    Polygon poly5(5, 5);

    Polygon **polyArrPtr;
    polyArrPtr = new Polygon *[MAX];
    
    polyArrPtr[0] = &poly1;                // if polygon was creating its own dynamic array, then it'd need to be in class
    polyArrPtr[1] = &poly2;
    polyArrPtr[2] = &poly3;
    polyArrPtr[3] = &poly4;
    polyArrPtr[4] = &poly5;
    
    calculate_averages(polyArrPtr, total_area, total_perimeter, MAX);
    
    print_averages(total_area, total_perimeter, MAX);
    
    account_summary(polyArrPtr, MAX);
    
    cout << endl ;
    
    remove_object_array(polyArrPtr, NEW_MAX);

}

void get_data(int &a)
{
    cout << endl;
    cout << "Specify the polygon you would like to remove " ;
    cin >> a;
    
    while ( a < 1 || a > 5)
    {
        cout << "Specify a polygon between 1 and 5        " ;
        cin >> a ;
    }
}

double average_area(double area, int num)
{
    return area / num ;
}

 double average_perimeter(double perimeter, int num)
{
    return perimeter/ num ;
}

 void print_averages(double &area, double &perimeter, int num)
 {
     cout << "Number of Polygons: " << num << endl;
     cout << "Average Area:       " << average_area(area, num) << endl;
     cout << "Average Perimeter:  " << average_perimeter( perimeter, num) << endl;
 }

void calculate_averages(Polygon *polyArrPtr[], double &a, double &p, int &size )
{
    
    for( int i = 0; i < size ; ++i)
    {
        polyArrPtr[i] -> get_area();
        a += polyArrPtr[i] -> get_area();
        polyArrPtr[i] -> get_perimeter();
        p += polyArrPtr[i] -> get_perimeter();
    }
}

void account_summary(Polygon *array[], int &size )
{
    for( int i = 0; i < size ; ++i)
    {
        cout << "Polygon " << i+1 << ":" << endl;
        
        array[i] -> Print();
        array[i] -> drawPolygon();
    }
    
    //delete [] array;                      // commeneted out to make use of remove_object_array

}

void remove_object_array( Polygon *array[], int &size)
{
    double new_area = 0, new_perimeter = 0 ;
    int entry;
    get_data(entry);                         // asks user to specify the polygon they would like to see
    cout << "\nREMOVING POLYGON " << entry << endl << endl; 

    if (entry == size )
    {
        account_summary(array, size);
    }
    else
    {
        entry = entry -1;

        for( int i = entry; i < size ; ++i)
        {
            array[i]->get_area();
            new_area += array[i]->get_area();
            array[i]->get_perimeter();
            new_perimeter += array[i]->get_perimeter();
            
            array[i] = array[i+1];
        }
        
        account_summary(array, size);
    }
    
    delete[] array;                           // deallocates memory of array
}


