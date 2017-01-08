//
//  Ship.hpp
//  Ships Class
//
//  Created by Ana Zeneli on 12/2/16.
//  Copyright © 2016 Ana Zeneli. All rights reserved.
//

#ifndef Ship_hpp
#define Ship_hpp

#include <stdio.h>
#include <iostream>
#include <string> 
using namespace std;

/*
Design a Ship class that has the following members:
• A member variable for the name of the ship (a string)
• A member variable for the year that the ship was built (a string)
• A constructor and appropriate accessors and mutators
• A virtual print function that displays the ship’s name and the year it was built.
*/

class Ship
{
private:
    string shipName;
    string yearBuilt;
    
public:
    Ship()
    {
        shipName = " ";
        yearBuilt = " " ;
    }
    
    ~Ship();
    
    Ship( string theName, string theYear )
    {
        shipName = theName;
        yearBuilt = theYear;
    }
    
    string getName() const
    {
        return shipName;
    }
    
    string getYear() const
    {
        return yearBuilt;
    }
    
    virtual void printInfo() const
    {
        cout << "Ship Name: " << shipName << endl;
        cout << "Year Built: " << yearBuilt << endl;
    }
    
};

/*

 Design a CruiseShip class that is derived from the Ship class. The CruiseShip class should have the following members:
• A member variable for the maximum number of passengers (an int)
• A constructor and appropriate accessors and mutators
• A print function that overrides the print function in the base class. The CruiseShip
class’s print function should display only the ship’s name and the maximum number of passengers.
*/
class CruiseShip : public Ship
{
private:
    int maxPassengers;
public:
    CruiseShip() : Ship()
    {
        maxPassengers = 0;
    }
    
    ~CruiseShip();
    
    CruiseShip(string theName, string theYear, int passengers) : Ship(theName, theYear)
    {
        maxPassengers = passengers;
    }

    void printInfo() const
    {
        cout << "Ship Name: "  << getName() << endl;
        cout << "Year Built: " << getYear() << endl;
        cout << "Maximum passengers: " << maxPassengers << endl;
    }

};
 
 /*
 Design a CargoShip class that is derived from the Ship class. The CargoShip class should have the following members:
• A member variable for the cargo capacity in tonnage (an int).
• A constructor and appropriate accessors and mutators.
• A print function that overrides the print function in the base class. The CargoShip
class’s print function should display only the ship’s name and the ship’s cargo capacity.
 
*/

class CargoShip : public Ship
{
private:
    int cargoCapacity;                      // in tonnage
    
public:
    CargoShip() : Ship() 
    {
        cargoCapacity = 0;
    }
    
    ~CargoShip();
    
    CargoShip(string theName, string theYear, int tonnage) : Ship(theName, theYear)
    {
        cargoCapacity = tonnage;
    }

    void printInfo() const
    {
        cout << "Ship Name: "  << getName() << endl;
        cout << "Year Built: " << getYear() << endl;
        cout << "Cargo capacity: " << cargoCapacity << endl;

    }
    
};


#endif /* Ship_hpp */












