#include<iostream>
#include<iomanip>
using namespace std;
#include"time.h"
time::time(int hr,int min,int sec )
{
settime(hr,min,sec);
}
time &time::settime(int h,int m,int s)
{
	sethour(h);
	setminute(m);
	setsecond(s);
	return *this;
}
time &time::sethour(int h)
{
	int hours=(h>=0&&h<24)?h:0;
	totalseconds=(hours*3600)+(getminute()*60)+getsecond();
	return*this;
}
time &time::setminute(int m)
{
	int minutes=(m>=0&&m<24)?m:0;
	totalseconds=(gethour()*3600)+(minutes*60)+getsecond();
	return*this;
}
time &time::setsecond(int s)
{
	int seconds=(s>=0&&s<24)?s:0;
	totalseconds=(gethour()*3600)+(getminute()*60)+seconds;
	return*this;
}
int time::gethour()const
{
return (totalseconds/3600);
}
int time::getminute()const
{
return ((totalseconds%3600)/60);
}
int time::getsecond()const
{
return ((totalseconds%3600)%60);
}
void time::printuniversal()const
{
	cout<<setfill('0')<<setw(2)<<gethour()<<":"<<setw(2)<<getminute()<<":"<<setw(2)<<getsecond();
}
void time::printstsndard()const
{
int hour=gethour();
cout<<((hour==0||hour==12)?12:hour%12)<<":"<<setfill('0')<<setw(2)<<getminute()<<":"<<setw(2)<<getsecond()<<(hour<12?"AM":"PM");
}
