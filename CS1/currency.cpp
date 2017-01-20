//
//  main.cpp
//  currency.cpp
//
//  Created by Ana Zeneli on 3/2/16.
//  Copyright © 2016 Ana Zeneli. All rights reserved.
//

#include <iostream>
using namespace std;


double exchange_AE (double amount);
double exchange_EA (double amount);
void get_data ( double amount);




int main()
{
    int Euros, Dollars;
    double ans, amount;
    get_data (amount);
    cout<<"Enter starting currency (Dollars or Euros)."<<endl;
    cin>> ans;
    cout<<ans;
    cout<<Euros;
    cout<<Dollars;
    
    if (ans== Euros)
        cout<< amount << " Euros is " << exchange_AE (amount) << " Dollars"<< endl;
    else
        if (ans == Dollars)
        {
            cout<< amount << " Dollars is " << exchange_EA (amount) << " Euros"<< endl;
        }
        
    
    return 0;
}

double exchange_AE (double amount)
{
    get_data (amount);
    return amount *1.33;
}

double exchange_EA (double amount)
{
    get_data (amount);
    return amount /1.33;
}

void get_data (double amount)
{
    cout<<"Enter the starting amount."<<endl;
    cin>>amount;
    cout<<amount;
}