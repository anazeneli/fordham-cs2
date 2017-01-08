//  checking_account.cpp
//  Final Class

#include "checking_account.hpp"

CheckingAccount:: CheckingAccount() : Account()
{
    fee = 0;
}

CheckingAccount:: CheckingAccount(double theBalance, double theFee) : Account(theBalance)
{
    fee = theFee;
}
void CheckingAccount:: deposit(double amount)
{
    balance = (balance +amount ) + fee;     // should add an amount to the current balance
}

void CheckingAccount:: withdraw(double withdrawl)
{
    if(withdrawl > balance)
        cout << "Debit amount exceeded account balance." << endl;
    else
    {
        balance = (balance - withdrawl) - fee;              // removes amount from current balance
        
    }
}

double CheckingAccount:: operator+ (double dollar)
{
    balance = (dollar + balance) - fee;
    return balance;
}

void CheckingAccount:: display() const
{
     cout << "Checking account: " << accountNumber << ", Balance($): " << balance << ", Fee: $" << fee <<endl;
}
