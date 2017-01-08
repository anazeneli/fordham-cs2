//  polygon.hpp

#ifndef polygon_hpp
#define polygon_hpp
#include <stdio.h>

class Polygon
{
private:
    static const int MAX_POLYGONS = 5;
    static int numPolygons ;
    int length ;
    int width ;
    int area;
    int perimeter;

public:
    void set_length(int l);
    void set_width(int w);
    void set_area(int len, int wid);
    void set_perimeter(int len, int wid);

    Polygon();
    Polygon(int len, int wid);
    ~Polygon(); 
    
    static const int getMaxPolygons()
    {
        return MAX_POLYGONS;
    }
    
    static int getNumPolygons()
    {
        return numPolygons;
    }
    
    int get_length() const
    {
        return length;
    }
    int get_width() const
    {
        return width;
    }
    
    int get_area() const
    {
        return area;
    }
    
    int get_perimeter() const
    {
        return perimeter;
    }
    
    void Print() const;
    void drawPolygon() const;
};

#endif /* polygon_hpp */
