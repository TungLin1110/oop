#ifndef SAVINGS_H
#define SAVINGS_H
#include"account.h"

class SavingsAccount:public Account
{
public:
	SavingsAccount(double,double);
	double calculateInterest();
private:
	double interestRate;
};
#endif