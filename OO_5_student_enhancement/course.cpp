//  Ana Zeneli
//  course.cpp
//  10/3/16

#include "course.hpp"
#include <iostream> 
#include <string> 

using namespace std;

Course::Course(): course_name(" "), course_id(0), credits(0) , instructor_name(" "), grade_received(" "){}

Course::Course( string course, int id, int num_credits, string instructor, string grade)
{
    set_course_name(course);
    set_course_id(id);
    set_credits(num_credits);
    set_instructor_name(instructor);
    set_grade_received(grade);
}

void Course::set_course_name(string course)
{
    course_name = course;
}
void Course::set_course_id(int id)
{
    course_id = id;
}
void Course::set_credits(int num_credits)
{
    credits = num_credits;
}
void Course::set_instructor_name(string instructor)
{
    instructor_name = instructor;
}
void Course::set_grade_received(string grade)
{
    grade_received = grade;
}

string Course::get_course_name() const
{
    return course_name;
}
int Course::get_course_id() const
{
    return course_id;
}
int Course::get_credits() const{
    return credits;
}
string Course::get_instructor_name() const{
    return instructor_name;
}
string Course::get_grade_received() const
{
    return grade_received;
}

void Course::Print() const
{
    cout << endl;
    cout << "Your Course Information:" <<  endl;
    cout << "Course Name:     " << get_course_name()     << endl;
    cout << "Course ID:       " << get_course_id()       << endl;
    cout << "Credit Number:   " << get_credits()         << endl;
    cout << "Instructor Name: " << get_instructor_name() << endl;
    cout << "Grade Received:  " << get_grade_received()  << endl << endl;
}
