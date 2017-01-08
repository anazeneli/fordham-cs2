//  polygon.cpp

#include "polygon.hpp"
#include <iostream>
#include <iomanip> 
using namespace std;

int Polygon :: numPolygons = 0; 
Polygon::Polygon(): length(0), width(0){}
Polygon::Polygon (int len, int wid)
{
    set_length(len);
    set_width(wid);
    
    set_area(len, wid);
    set_perimeter(len, wid);
    
    ++numPolygons;

    if (numPolygons > MAX_POLYGONS)
    {
        cout << "You have reached the maximum possible polygon entries" << endl;
        exit(EXIT_FAILURE);
    }    
}

Polygon:: ~Polygon()
{
       //cout << "DELETED" << endl;
}

void Polygon:: set_length(int l)
{
    length = l;
}

void Polygon:: set_width(int w)
{
    width = w;
}

void Polygon:: set_area(int len, int wid)
{
    area = len * wid;
}
void Polygon:: set_perimeter(int len, int wid)
{
    perimeter = 2 * len + 2 * wid;
}

void Polygon:: Print() const
{
    cout << "Length:    " << get_length()      << endl;
    cout << "Width:     " << get_width()       << endl;
    cout << "Area:      " << get_area()        << endl;
    cout << "Perimeter: " << get_perimeter()   << endl;
}

void Polygon:: drawPolygon() const
{
    cout << endl;
    for ( int i= 0 ; i < get_length(); ++i )
    {
        for (int j= 0 ; j < get_width() ; ++j )
        {
            if (i == 0 || i == get_length() -1)
                cout << setw(2) << "*" ;
            else if ( j == 0 || j == get_width() -1)
                cout << setw(2) << "*" ;
            else
                cout << setw(2) << " " ;
        }
        cout << endl;
    }
    cout << endl;
}
