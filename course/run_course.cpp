//  Ana Zeneli
//  run_course.cpp
//  10/3/16

#include <iostream>
#include <string>
#include "course.hpp"
using namespace std;

void get_data(string &course, int &id, int &num_credits, string &instructor, string &grade);

int main()
{
    Course info;
    string course_i, instructor_i, grade_i;
    int id_i, credits_i;
    
    get_data(course_i, id_i, credits_i, instructor_i, grade_i);
    Course myCourse(course_i, id_i, credits_i, instructor_i, grade_i);
    
    myCourse.Print();

    return 0;
}

void get_data(string &course, int &id, int &num_credits, string &instructor, string &grade)
{
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
