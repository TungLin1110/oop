#include<iostream>
#include<iomanip>
using namespace std;
#include"time.h"
const int maxtick=15;
int main()
{
Time t;
t.setTime(23,59,57);
for(int tick=1;tick<maxtick;++tick)
{
	t.printStandard();
	cout<<endl;
	t.tick();
}
}