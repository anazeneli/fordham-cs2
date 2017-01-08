//  student.hpp

#ifndef STUDENT_hpp
#define STUDENT_hpp

#include <stdio.h>
#include <string> 
#include "name.hpp"
#include "date.hpp"
#include "program.hpp"
#include "course.hpp"
using namespace std;

class Student
{
private:
    int studentID;
    char gender;
    Name fullName;
    Date birthday;
    Program university;
    Course seminar;
public:
    Student();
    Student(int id, char gen, Name full, Date date, Program college, Course seminar);

    void setStudentID(int id); //initializes variables
    void setGender(char gen);
    void setfullName(Name full);
    void setDateOfBirth(Date date);
    void setUniversity(Program college);
    void setCourse(Course seminar_i);

    void Print() const;

    int getStudentID() const;   // delivers previously enterd variables
    Name getFullName() const;
    Date getDateOfBirth() const;
    Program getUniversity() const;
    Course getCourse() const;
    char getGender() const;
};
#endif /* STUDENT_hpp */
