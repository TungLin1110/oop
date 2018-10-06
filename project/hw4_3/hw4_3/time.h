#ifndef time_H
#define time_H
class Time
{
public:
	Time(int=0,int=0,int=0);
	Time &settime(int,int,int);
	Time &sethour(int);
	Time &setminute(int);
	Time &setsecond(int);
	int gethour() const;
	int getminute() const;
	int getsecond() const;
	void printuniversal() const;
	void printstsndard() const;
private:
	int totalseconds;
};
#endif