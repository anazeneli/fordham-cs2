// Fig. 6.11: fig06_11.cpp
// Craps simulation.
#include <iostream>
#include <cstdlib> // contains prototypes for functions srand and rand
#include <ctime> // contains prototype for function time
#include <cmath>

using namespace std;

double x,y,z;
unsigned int seed= (unsigned int)time(0);

double entry_angle (double a);
double distance (double b);
double deflection_angle(double c, double def_angle);
double calculate_distance (double a, double b, double c);
double random (unsigned int & seed);
int random_distance();



int rollDice(); // rolls dice, calculates and displays sum

int main()
{
    // enumeration with constants that represent the game status
    enum Status { CONTINUE, ABSORBED, ESCAPED, REFLECTED }; // all caps in constants
    
    int distance; // distance if no win or loss on first roll
    Status neutronStatus; // can contain CONTINUE, WON or LOST
    
    // randomize random number generator using current time
    random(seed);
    
    int sumOfDistances = rollDice(); // first roll of the dice
    
    // determine game status and distance (if needed) based on first roll
    switch ( sumOfDistances )
    {
        case 1: //
            
        case 7: // win with 7 on first roll
        case 11: // win with 11 on first roll
            neutronStatus = ABSORBED;
            
            break;
        case 2: // lose with 2 on first roll
        case 3: // lose with 3 on first roll
        case 12: // lose with 12 on first roll
            neutronStatus = ESCAPED;
            
            break;
        default: // did not win or lose, so remember distance
            neutronStatus = CONTINUE; // game is not over
            distance = sumOfDistances; // remember the distance
            cout << "distance is " << distance << endl;
            break; // optional at end of switch
    } // end switch
    
    // while game is not complete
    while (neutronStatus == CONTINUE) // not WON or LOST
    {
        
        sumOfDistances = random_distance(); // roll dice again
        
        // determine game status
        if ( sumOfDistances == distance ) // win by making distance
            neutronStatus = ABSORBED;
        else
            if ( sumOfDistances == 7 ) // lose by rolling 7 before distance
                neutronStatus = ESCAPED;
    } // end while
    
    // display won or lost message
    if (neutronStatus == ABSORBED )
        cout << "Player wins" << endl;
    else
        cout << "Player loses" << endl;
} // end main

// roll dice, calculate sum and display result

int random_distance()
{
    // pick random die values
    int d1 = calculate_distance(x,y,z); // first collision
    int d2 = calculate_distance(x,y,z); // second collision
    int d3 = calculate_distance(x,y,z); // third collision
    int d4 = calculate_distance(x,y,z); // fourth collision
    int d5 = calculate_distance(x,y,z); // fifth collision
    int d6 = calculate_distance(x,y,z); // sixth collision
    int d7 = calculate_distance(x,y,z); // seventh collision
    
    
    int sum = d1 + d2 + d3 + d4 + d5 + d6 + d7; // compute sum of die values
    
    // display results of this roll
    cout << "Distance equals " << sum <<endl;
    return sum; // end function rollDice
} // end function rollDice

double calculate_distance (double x, double y, double z)
{
    double entryAngle;
    entryAngle = entry_angle(z);
    return distance(x)*cos(deflection_angle(y, entryAngle)- entry_angle(z));
}

double distance (double x)
{
    x= 1.1*random(seed) +0.6;
    return x;
}

double deflection_angle(double y , double entryAngle)
{
    return pow(-1, int(2*random(seed)))*(0.175+2.792*random(seed));
}

double entry_angle (double z)
{
    z= pow(-1, int(2*random(seed)))*(1.222*random(seed));
    return z;
}


double random (unsigned int & seed)
{
    const int MODULUS=15749;
    const int MULTIPLIER=69069;
    const int INCREMENT= 1;
    seed= ((MULTIPLIER * seed) + INCREMENT) % MODULUS;
    return double(seed)/double(MODULUS);
}

