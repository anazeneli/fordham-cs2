//
//  name.cpp
//  WORK
//
//  Created by Ana Zeneli on 10/9/16.
//  Copyright © 2016 Ana Zeneli. All rights reserved.
//

#include "name.hpp"

Name::Name():first_name(" "), middle_initial(' '), last_name(" ") {}

Name:: Name(string first, char mid, string last)
{
    set_first_name(first);
    set_middle_initial(mid);
    set_last_name(last);
}

void Name::set_first_name(string first)
{
    first_name = first;
}

void Name::set_middle_initial(char mid)
{
    middle_initial = mid;
}
void Name::set_last_name(string last)
{
    last_name = last;
}

string Name:: get_first_name() const
{
    return first_name;
}

char Name:: get_middle_initial() const
{
    return middle_initial;
}
string Name:: get_last_name() const
{
    return last_name;
}

void Name:: Print() const
{
    cout << "Name:        " << get_first_name() << " " << get_middle_initial() << ". " << get_last_name() << endl;
}
