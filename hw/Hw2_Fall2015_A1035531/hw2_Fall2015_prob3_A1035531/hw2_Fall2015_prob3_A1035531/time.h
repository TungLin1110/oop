#include<iostream>
using namespace std;

class Time
{
public:
	Time(int,int,int);
	void setHour(int);
	int getHour();
	void setMinute(int);
	int getMinute();
	void setSecond(int);
	int getSecond();
	void displayTime();
private:
	int hour;
	int minute;
	int second;
};