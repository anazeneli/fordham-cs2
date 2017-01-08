//  date.hpp

#ifndef date_hpp
#define date_hpp

#include <stdio.h>

class Date
{
private:
    int month;                                  // one of 12
    int day;                                    // one of 29-31
    int year;                                   // y > 0 || y < 2016
    int max_days;
public:
    Date();
    Date(int month_i, int day_i, int year_i);
    
    void set_month(int);
    void set_day(int);
    void set_year(int);
    
    void Print() const;

    int get_month() const;
    int get_day() const;
    int get_year() const;
};

#endif /* date_hpp */
