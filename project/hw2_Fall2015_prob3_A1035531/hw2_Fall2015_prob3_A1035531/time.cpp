#include<iostream>
using namespace std;
#include"time.h"

Time::Time(int h,int m,int s)
{
setHour(h);
setMinute(m);
setSecond(s);
}
void Time::setHour(int h)
{
	hour = h;
	if(hour>23)
		hour=0;
}
int Time::getHour()
{
return hour;
}
void Time::setMinute(int m)
{
	minute = m;
}
int Time::getMinute()
{
return minute;
}
void Time::setSecond(int s)
{
	second = s;
}
int Time::getSecond()
{
return second;
}
void Time::displayTime()
{
cout<<hour<<":"<<minute<<":"<<second<<endl;
}
