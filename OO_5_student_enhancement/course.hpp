//  course.hpp
#ifndef course_hpp
#define course_hpp

#include <stdio.h>
#include <string>
using namespace std;

class Course
{
private:
    string course_name;
    int course_id;
    int credits;
    string instructor_name;
    string grade_received;
public:
    Course();
    Course( string , int , int , string , string );
    
    void set_course_name(string);
    void set_course_id(int);
    void set_credits(int);
    void set_instructor_name(string);
    void set_grade_received(string);
    
    void Print() const;
    
    string get_course_name() const;
    int get_course_id() const;
    int get_credits() const;
    string get_instructor_name() const;
    string get_grade_received() const;
};

#endif /* course_hpp */
