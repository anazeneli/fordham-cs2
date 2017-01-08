//  account.hpp
//  Final Class

#ifndef account_hpp
#define account_hpp

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Account
{
protected:
    double balance;
    int accountNumber = 1000;
    static int accountsCreated;                     // initialize to 1000, incremented by 1 for each new account
    
public:
    Account();
    Account(double bal);
    
    double getBalance() const;
    double operator+( double dollar);           //represents the addition of $ amount to add to account balance

    virtual void deposit(double amount);
    virtual void withdraw(double debt);             // should withdraw money from Account <= balance
    
    virtual void display() const;
};

#endif /* account_hpp */
