#include <iostream> 
#include "Time.h" // include definition of class Time
using namespace std;


int main()
{
	Time t;
	while(1)
	{
	cout<<"please enter hour(space)minute(space)second: ";
	int h,m,s;
	cin>>h>>m>>s;
	if(cin.eof())
		break;
	cout<<"your time : "<<h<<":"<<m<<":"<<s<<endl;
	if (h>=0&&h<24)
		{if((m>=0&&m<60))
	{
	if(s>=0&&s<60)
		cout<<"correct time !"<<endl;
	}
	}
	else
		{t.setTime(h,m,s);
	cout<<"let invalde one = 0 and display by Standard type and Universal type : "<<endl;
	t.printStandard();
	cout<<"\n";
	t.printUniversal();
	cout<<endl;
	}
	}

}