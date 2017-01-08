//  Ana Zeneli
//  date.cpp
//  9/30/16

#include "date.hpp"
#include <iostream>

using namespace std;

Date::Date(): month(0), day(0), year(0) {}

Date::Date (int month_i, int day_i, int year_i)
{
    set_month(month_i);
    set_day(day_i);
    set_year(year_i);
}

//set month
void Date::set_month(int month_i)
{
    month = month_i;
}

// set day
void Date::set_day(int day_i)
{
    day = day_i;
}

// Set year
void Date::set_year(int year_i)
{
    year = year_i;
}

int Date::get_month() const{                      // inline definition of getters
    return month;
}
int Date::get_day() const{
    return day;
}
int Date::get_year() const{
    return year;
}

void Date::Print() const
{
    cout << "Birthday:    ";
    if(get_month() < 10)
        cout<< "Birthday:   " << "0" << get_month() << "-" ;
    else
        cout << get_month() << "-";
    if(get_day() < 10)
        cout << "0" << get_day() << "-" ;
    else
        cout << get_day() << "-" ;
    if (get_year() < 10)
        cout << "000" << get_year() << endl;
    else if(get_year() < 100 )
        cout << "00" <<  get_year() << endl;
    else if(get_year() < 1000 )
        cout << "0" <<  get_year() << endl;
    else
        cout << get_year() << endl;
}
