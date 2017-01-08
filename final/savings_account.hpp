//  savings_account.hpp
//  Ships Class

#ifndef savings_account_hpp
#define savings_account_hpp

#include <stdio.h>
#include "account.hpp"

using namespace std;

class SavingsAccount : public Account {
private:
    double interest;
    
public:
    SavingsAccount();
    SavingsAccount(double theBalance, double rate);
    double calculateInterest();

    double operator+ (double dollar);

    void display() const;
};



#endif /* savings_account_hpp */
