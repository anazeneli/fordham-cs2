// Ana Zeneli
// name.cpp
// 9/30/16

#include <iostream> 
#include "name.hpp"

using namespace std;

void get_data ( string &first, char &mid, string &last);

Name::Name():  first_name("NoName"),  middle_initial(' '),  last_name("NoName") {}

int main()
{
    Name person1;
    
    string first;
    char mid;
    string last;
    //cout << person1.get_first_name() << " " << person1.get_middle_initial() << " " << person1.get_last_name() << endl;

    get_data(first, mid, last);
    
    person1.set_first_name(first);
    person1.set_middle_initial(mid);
    person1.set_last_name(last);
    
    cout << "\nYour name is: " << endl;
    cout << person1.get_first_name() << " " << person1.get_middle_initial() << " " << person1.get_last_name() << endl;
    
}
void get_data ( string &first, char &mid, string &last)
{
    cout << "Enter your first name     ";
    cin >> first;

    cout << "Enter your middle initial ";
    cin >> mid;
    
    cout << "Enter your last name      ";
    cin >> last;
}

void Name::set_first_name(string first)
{
    first_name = first;
}

void Name:: set_middle_initial(char mid)
{
    middle_initial = mid;
}

void Name::set_last_name(string last)
{
    last_name = last;
}

