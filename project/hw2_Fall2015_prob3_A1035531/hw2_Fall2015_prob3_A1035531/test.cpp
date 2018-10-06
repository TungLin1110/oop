#include<iostream>
using namespace std;
#include"time.h"
int main()
{
	Time time(9,30,11);
	cout <<"hour:"<<time.getHour()<<endl;
	cout <<"minute:"<<time.getMinute()<<endl;
	cout <<"second:"<<time.getSecond()<<endl;
	
	cout<<"\norigin:"<<endl;
	time.displayTime();
	time.setHour(11);
	time.setMinute(45);
	time.setSecond(50);
	cout<<"\nnew: "<<endl;
	time.displayTime();
}
