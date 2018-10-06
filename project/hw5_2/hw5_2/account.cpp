#include<iostream>
using namespace std;
#include"account.h"

Account::Account(double initialBalance)
{
	if(initialBalance>=0.0)
		balance=initialBalance;
	else
	{
		cout<<"error initialbalance negative"<<endl;
			balance=0.0;
	}

}
void Account::credit(double amount)
{
	balance=balance+amount;
}
bool Account::debit(double amount)
{
	if(amount>balance)
	{
		cout<<"debit amount exceeded balance"<<endl;
		return false;
	}
	else
	{
		balance=balance-amount;
		return true;
	}
}
void Account::setBalance(double newBalance)
{
	balance=newBalance;
}
double Account::getBalance()
{
	return balance;
}