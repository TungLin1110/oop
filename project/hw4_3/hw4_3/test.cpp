#include<iostream>
#include"time.h"
using namespace std;
int main()
{
	Time t;
	t.sethour(18).setminute(30).setsecond(22);
	cout<<"universal:";
	t.printuniversal();
	cout<<"\nstandard:";
	t.printstsndard();
	cout<<"\nnew standard:";
	t.settime(20,20,20).printstsndard();
	cout<<endl;
}