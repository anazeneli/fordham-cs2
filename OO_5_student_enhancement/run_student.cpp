/*
    Ana Zeneli
    student_program.cpp
    10/9/16
*/

#include <iostream>
#include <string> 
#include "student.hpp"
#include "name.hpp"
#include "date.hpp"
#include "program.hpp"
#include "course.hpp"

using namespace std;

void get_data(int &stud, string &first, char &mid, string &last, int& month, int&day, int&year, char& gen, int &campus_i, int &degree_i, string &major_i, string &minor_i, string &course, int &id, int &num_credits, string &instructor, string &grade);

int main()
{
    int stud;
    string first, last;
    char mid, gen;
    int month_i;                                  // one of 12
    int day_i;                                    // one of 29-31
    int year_i;                                   // y > 0 || y < 2016
    int camp, deg;
    string maj, min;
    string course_i, instructor_i, grade_i;
    int id_i, credits_i;
    
    get_data(stud, first, mid, last, month_i, day_i, year_i, gen,camp, deg, maj, min, course_i, id_i, credits_i, instructor_i, grade_i);
    
    Name person1(first, mid, last);
    Date birthday(month_i,day_i,year_i);
    Program myProgram(camp, deg, maj, min);
    Course myCourse(course_i, id_i, credits_i, instructor_i, grade_i);
    
    Student student1(stud, gen, person1, birthday, myProgram, myCourse);

    student1.Print();
    
    return 0;
}

void get_data(int &stud, string &first, char &mid, string &last, int& month, int&day, int&year, char& gen, int &campus_i, int &degree_i, string &major_i, string &minor_i, string &course, int &id, int &num_credits, string &instructor, string &grade)
{
    cout << "Enter Student ID             ";
    cin >> stud ;
    if ( stud <= 0 )
    {
        cout<< "Invalid Student ID" << endl;
        exit(EXIT_FAILURE);
    }

    cout << "Enter first name             ";
    cin >> first ;

    cout << "Enter middle initial         ";
    cin >> mid;

    cout << "Enter last name              ";
    cin >> last ;

    cout << "Enter gender (m or f)        " ;
    cin >> gen;
    
    if ( gen == 'm' || gen == 'M')
        gen = gen;
    else if ( gen == 'f' || gen == 'F')
        gen = gen;
    else
    {
        cout << "Invalid gender" << endl;
        exit(EXIT_FAILURE);
    }
    cout << "Enter the following date in integers:" << endl;
    cout << "Enter your birth month       ";
    cin >> month;
    
    if ( month > 12 || month < 0)
    {
        do
        {
            cout << "Please enter a valid month:  " << endl;
            cout << "January = 1, February = 2, March = 3, etc." << endl;
            cin >> month;
        } while(month < 0 || month > 13);
    }
    
    int max_days= 0;
    do
    {
        cout << "Enter your birth day         ";
        cin >> day;
        
        if (month == 2)                             // February normally has 28 days
        {
            max_days = 28;
        }
        else if ( month == 4 || month == 6 || month == 9 || month == 11 ){
            max_days = 30;                          // Set months that only have 30 days
        }
        else{
            max_days = 31;                          // Set months that have 31 days
        }
        
        if ( day > max_days || day < 0)
        {
            cout << "The month you entered has a maximum of " <<  max_days << " days." << endl ;
            cout << "Please enter a valid day." << endl << endl;
        }
        
    } while( day > max_days || day < 0 );

    cout << "Enter your birth year        " ;
    cin >> year;
    
    while (year <= 0 || year > 2016)
    {
        cout << "Please enter a valid year    " ;
        cin >> year;
    }

    // input campus
    cout << "Campus choices: "     << endl;
    cout << "   1: Lincoln Center" << endl;
    cout << "   2: Rose Hill"      << endl;
    cout << "   3: Westchester"    << endl;
    cout << "Enter your home campus:      " ;
    cin >> campus_i;
    
    while ( campus_i < 1 || campus_i > 3)
    {
        cout << "Please enter a valid campus: " << endl;
        cin >> campus_i;
    }
    
    // input degree
    cout << "Degree Choices:" << endl;
    cout << "   1: BS \n";
    cout << "   2: BA\n";
    cout << "Enter your degree:           " ;
    cin >> degree_i;
    
    while ( degree_i < 1 || degree_i > 2)
    {   
        cout << "Please enter a valid degree: " << endl;
        cin >> degree_i;
    }
    
    // input major
    cout << "If undeclared, " << endl;
    cout << "type UNDECLARED:"<< endl;
    cout << "Enter your major:            " ;
    cin.ignore();
    getline(cin, major_i);
    
    // input minor
    cout << "If no minor, type NONE:      \n" ;
    cout << "Enter your minor:            " ;
    getline(cin, minor_i);
    
    cout << "Enter course name:           " ;
    getline(cin, course);
    
    cout << "Enter course ID:             " ;
    cin >> id;

    cout << "Enter number of credits:     " ;
    cin >> num_credits;
    
    cout << "Enter the instructor's name: " ;
    cin.ignore();
    getline(cin, instructor);
    
    cout << "Enter the grade earned :     " ;
    getline(cin, grade);
    
}
