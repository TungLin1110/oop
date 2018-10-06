#include<iostream>
#include<iomanip>
using namespace std;
#include"time.h"

Time::Time(int h,int m,int s)
{
setTime( h, m, s);
}
void Time::setTime(int h,int m,int s)
{
setHour(h);
setMinute(m);
setSecond(s);
}
void Time::setHour(int h)
{
	hour = h;
	if(hour>23||hour<0)
		{hour=0;
	cout<<"hour invalid"<<endl;}
}
void Time::setMinute(int m)
{
	minute = m;
	if(minute>=60||minute<0)
		{minute=0;
	cout<<"minute invalid"<<endl;}
}
void Time::setSecond(int s)
{
	second = s;
	if(second>=60||second<0)
		{second=0;
	cout<<"second invalid"<<endl;}
}
int Time::getHour()
{
return hour;
}
int Time::getMinute()
{
return minute;
}
int Time::getSecond()
{
return second;
}

void Time::printUniversal()
{
cout<<setfill('0')<<setw(2)<<getHour()<<":"<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond();
}
void Time::printStandard()
{
cout<<((getHour()==0||getHour()==12)?12:getHour()%12)<<":"<<setfill('0')<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond()<<(hour<12?"AM":"PM");
}

