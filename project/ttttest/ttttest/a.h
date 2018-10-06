#ifndef TIME_H
#define TIME_H
class time
{
public:
	time(int=0,int=0,int=0);
	time &settime(int,int,int);
	time &sethour(int);
	time &setminute(int);
	time &setsecond(int);
	int gethour() const;
	int getminute() const;
	int getsecond() const;
	void printuniversal() const;
	void printstsndard() const;
private:
	int totalseconds;
};
#endif