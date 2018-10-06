#include<iostream>
using namespace std;
#ifndef TIME_H
#define TIME_H
class Time
{
public:
	Time(int=0,int=0,int=0);
	void setTime(int,int,int);
	void setHour(int);
	int getHour();
	void setMinute(int);
	int getMinute();
	void setSecond(int);
	int getSecond();
	void printUniversal();
	void printStandard();
private:
	int hour;
	int minute;
	int second;
};
#endif