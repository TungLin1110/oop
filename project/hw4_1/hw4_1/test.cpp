#include<iostream>
#include<iomanip>
using namespace std;
#include "fixeddeposit.h"
int main()
{
	fixeddeposit deposit1(10000.00);
	fixeddeposit deposit2(60000.00);
	fixeddeposit::modifyinterest(.09);

	cout<<"inital\ndeposit1:";
	deposit1.printbalance();
	cout<<"      deposit2:";
	deposit2.printbalance();
	deposit1.calculatesixmonthlyinterest();
	deposit2.calculatesixmonthlyinterest();

	cout<<"\nafter <0.09>\n"<<"deposit1:";
	deposit1.printbalance();
	cout<<"      deposit2:";
	deposit2.printbalance();

	fixeddeposit::modifyinterest(.10);
	deposit1.calculatesixmonthlyinterest();
	deposit2.calculatesixmonthlyinterest();

	
	cout<<"\nafter <0.10>\n"<<"deposit1:";
	deposit1.printbalance();
	cout<<"      deposit2:";
	deposit2.printbalance();
	cout<<endl;
	return 0;
}
