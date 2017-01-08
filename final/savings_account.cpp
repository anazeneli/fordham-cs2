//  savings_account.cpp
//  Final Class

#include "savings_account.hpp"

SavingsAccount::SavingsAccount() : Account()
{
    interest = 0;
}

SavingsAccount::SavingsAccount(double theBalance, double rate) : Account(theBalance)
{
    interest = rate;
}

double SavingsAccount::calculateInterest()
{
    return interest * balance;
}

double SavingsAccount::operator+ (double dollar)
{
    balance = balance + dollar;
    return balance;
}

void SavingsAccount:: display() const
{
    cout << "Savings account: " << accountNumber << ", Balance($): " << balance << ", Interest rate(%): " << interest <<endl;
}
