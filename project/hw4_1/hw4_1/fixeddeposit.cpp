#include<iostream>
#include<iomanip>
using namespace std;
#include "fixeddeposit.h"
double fixeddeposit::annualinterestrate = 0.0;
void fixeddeposit::calculatesixmonthlyinterest()
{
	fixedbalance+=fixedbalance*(annualinterestrate/2.0);
}
void fixeddeposit::modifyinterest(double i)
{
	annualinterestrate=(i>=0.0&&i<=1.0)?i:0.09;
}
void fixeddeposit::printbalance() const
{
	cout << fixed<<'$'<<setprecision(2)<<fixedbalance;
}

