//  Ana Zeneli
//  Student.cpp
//  9/27/16
//  This program accepts information from the Student,
//  checks that it meets the restrictions, and displays it.

#include "student.hpp"
#include "name.hpp"
#include "date.hpp"
#include "program.hpp"
#include "course.hpp"
#include <iostream>

using namespace std;

Student::Student(): studentID(1), gender(' ') {}
Student::Student(int id, char gen, Name full, Date date, Program college, Course seminar_i)
{
    setStudentID(id);                   // set personal information within Student Class
    setGender(gen);
    setfullName(full);
    setDateOfBirth(date);
    setUniversity(college);
    setCourse(seminar_i);
}

void Student:: setCourse(Course seminar_i)
{
    seminar = seminar_i;
}

void Student:: setfullName(Name full)
{
    fullName = full;
}

void Student:: setDateOfBirth(Date date)
{
    birthday = date;
}

void Student:: setUniversity(Program college)
{
    university = college;
}

void Student::setStudentID(int s)                       // ensure student ID is a number
{
    studentID = s;
}

void Student::setGender(char g)                     // check that gender is specified as one of the two options
{
    gender = g; 
}

int Student::getStudentID() const
{
    return studentID;
}

char Student::getGender() const
{
    return gender;
}

Name Student:: getFullName() const
{
    return fullName;
}

Date Student:: getDateOfBirth() const
{
    return birthday;
}

Program Student:: getUniversity() const
{
    return university;
}

Course Student:: getCourse() const
{
    return seminar;
}

void Student:: Print() const
{
    cout << endl;                                   // print data
    cout << "Your Student Information: " << endl;
    cout << "Student ID:  " << getStudentID() << endl;
    
    fullName.Print();
    
    cout << "Gender:      ";
    if (getGender() == 'f'|| getGender() == 'F')
        cout << "Female" << endl;
    else if (getGender() == 'm' || getGender() == 'M')
        cout << "Male" << endl;
    
    birthday.Print();
    university.Print();
    seminar.Print();
    cout << endl;
}

