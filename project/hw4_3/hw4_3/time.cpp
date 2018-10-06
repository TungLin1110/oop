#include<iostream>
#include<iomanip>
using namespace std;
#include"time.h"
Time::Time(int hr,int min,int sec )
{
settime(hr,min,sec);
}
Time &Time::settime( int h, int m, int s ) 
{
	sethour(h);
	setminute(m);
	setsecond(s);
	return *this;
}
Time &Time::sethour(int h)
{
	int hours=(h>=0&&h<24)?h:0;
	totalseconds=(hours*3600)+(getminute()*60)+getsecond();
	return*this;
}
Time &Time::setminute(int m)
{
	int minutes=(m>=0&&m<24)?m:0;
	totalseconds=(gethour()*3600)+(minutes*60)+getsecond();
	return*this;
}
Time &Time::setsecond(int s)
{
	int seconds=(s>=0&&s<24)?s:0;
	totalseconds=(gethour()*3600)+(getminute()*60)+seconds;
	return*this;
}
int Time::gethour()const
{
return (totalseconds/3600);
}
int Time::getminute()const
{
return ((totalseconds%3600)/60);
}
int Time::getsecond()const
{
return ((totalseconds%3600)%60);
}
void Time::printuniversal()const
{
	cout<<setfill('0')<<setw(2)<<gethour()<<":"<<setw(2)<<getminute()<<":"<<setw(2)<<getsecond();
}
void Time::printstsndard()const
{
int hour=gethour();
cout<<((hour==0||hour==12)?12:hour%12)<<":"<<setfill('0')<<setw(2)<<getminute()<<":"<<setw(2)<<getsecond()<<(hour<12?"AM":"PM");
}
