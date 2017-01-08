//  Ana Zeneli
//  course.cpp
//  10/3/16

#include "course.hpp"
#include <iostream> 
#include <string> 

using namespace std;

Course::Course(): course_name(" "), course_id(0), credits(0) , instructor_name(" "), grade_received(" "){}

Course::Course( string course, int id, int num_credits, string instructor, string grade){
    course_name = course;
    course_id = id;
    credits = num_credits;
    instructor_name = instructor;
    grade_received = grade;
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

void Course::Print()
{
    cout << endl;
    cout << "Course Name:     " << get_course_name()     << endl;
    cout << "Course ID:       " << get_course_id()       << endl;
    cout << "Credit Number:   " << get_credits()         << endl;
    cout << "Course Name:     " << get_instructor_name() << endl;
    cout << "Course Name:     " << get_grade_received()  << endl << endl;
}
