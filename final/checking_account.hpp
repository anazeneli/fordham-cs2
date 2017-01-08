//  checking_account.hpp

#ifndef checking_account_hpp
#define checking_account_hpp

#include <stdio.h>
#include "account.hpp"
using namespace std;

class CheckingAccount : public Account
{
protected:
    double fee;                                     // fee charged per transaction
    
public:
    CheckingAccount();
    CheckingAccount(double theBalance, double theFee);
    void deposit(double amount);
    void withdraw(double withdrawl);
    double operator+ (double dollar);

    virtual void display() const;
};

#endif /* checking_account_hpp */
