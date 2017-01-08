//  account.cpp
//  Final Class

#include "account.hpp"

int Account:: accountsCreated = 1000;

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

    
Account:: Account()
{
    balance = 0;
    accountNumber = 0;
}
    
Account:: Account(double bal)
{
    if(bal <= 0.0)
    {
        cout << "Invalid initial balance." << endl;
        bal = 0.0 ;
    }
    else
    {
        balance = bal;
        ++accountsCreated;
    }
    
    accountNumber = accountsCreated;
}

double Account:: operator+ (double dollar)
{
    balance = dollar + balance;
    return balance;
}

double Account:: getBalance() const
{
    return balance;
}
void Account:: deposit(double amount)
{
    balance = balance + amount;                           // should add an amount to the current balance
        
}
    
void Account::withdraw(double withdrawl)             // should withdraw money from Account <= balance
{
    if(withdrawl > balance)
    {
        cout << "Debit amount exceeded account balance." << endl;
        
    }
    else
        balance = balance - withdrawl;              // removes amount from current balance
}

void Account:: display() const
{
    cout << "Account Number : " << accountNumber << ", Account Balance: " << balance << endl;
}
    

