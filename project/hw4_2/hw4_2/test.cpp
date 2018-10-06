#include<iostream>
using namespace std;
#include"integerset.h"
int main()
{
	integerset a;
	integerset b;
	integerset c;
	integerset d;
	cout<<"enter set a;\n";
	a.inputset();
	cout<<"enter set b;\n";
	b.inputset();
	c=a.unionofset(b);
	d=a.intersetfunctionofsets(b);
	cout<<"\nunion of a and b is:\n";
	c.printset();
	cout<<"intersection of a and b is:\n";
	d.printset();
	if (a.isequalto(b))
		cout<<"set a is equal to set b\n";
	else 
		cout<<"set a is not equal to set b\n";

	cout<<"\ninserting 70 into set a\n";
	a.insertelement(70);
	cout<<"set a is now:\n";
	a.printset();
	cout<<"\ndeleting 70 from set a\n";
	a.insertelement(70);
	cout<<"set a is now:\n";
	a.printset();
	const int arraysize=10;
	int intarray[arraysize]={12,35,94,2,6,99,75,102,-5,1};
	integerset e(intarray,arraysize);
	cout<<"\nset e is:\n";
	e.printset();
	cout<<endl;
	return 0;
}