//  Ana Zeneli
//  Ships_driver.cpp
//  12/2/16
//  Ships Class
//
//  Created by Ana Zeneli on 12/2/16.
//  Copyright © 2016 Ana Zeneli. All rights reserved.
//

#include <iostream>
#include "Ship.hpp"

using namespace std;

void display(const Ship *vessel);


int main()
{
    // Constant for the size of an array.
    const int NUM_SHIPS = 4;
    // tests is an array of Ship pointers.
    // Each element of tests is initialized with the
    // address of a dynamically allocated object.
    Ship *fleet[NUM_SHIPS] =
    {
        new Ship("Base Ship","2000"),
        new CruiseShip("Cruise Ship I","2005",950),
        new CruiseShip("Cruise Ship II","2010",1500),
        new CargoShip("Cargo Ship","2003",10000)
    };

    for (int i = 0; i < NUM_SHIPS; i++)
    {
        display(fleet[i]);
    }
}


// add this function under your main() function

void display(const Ship *vessel)
{
    cout << "The vessel's information is " ;
    vessel->printInfo();
    cout << endl;

}
