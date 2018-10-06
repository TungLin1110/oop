#include<iostream>
#include<iomanip>
using namespace std;
#include "integerset.h"
integerset::integerset(int array[],int size)
{
emptyset();
for(int i=0;i<size;i++)
	insertelement(array[i]);
}
void integerset::emptyset()
{
for(int y=0;y<101;y++)
	set[y]=0;
}void integerset::inputset()
{
int number;
do 
	{
	cout<<"enter an element(-1 to end):";
	cin>>number;
	if(validentry(number))
		set[number]=1;
	else if(number!=-1)
		cerr<<"innalid element\n";
	}while(number!=-1);
	cout<<"entry complete\n";
}
void integerset::printset()const
{
int x=1;
bool empty = true;
cout<<"{";
for(int u=0;u<101;u++)
{
	if(set[u])
	{
		cout<<setw(4)<<u<<(x%10==0?"\n":"");
		empty=false;
		x++;
	}
}
if(empty)
	cout<<setw(4)<<"---";
cout<<setw(4)<<"}"<<'\n';
}
integerset integerset::unionofset(const integerset &r)
{
	integerset temp;
	for(int n=0;n<101;n++)
		if(set[n]==1||r.set[n]==1)
			temp.set[n]=1;
	return temp;
}
integerset integerset::intersetfunctionofsets(const integerset &r)
{
	integerset temp;
	for(int w=0;w<101;w++)
		if(set[w]==1&&r.set[w]==1)
			temp.set[w]=1;
	return temp;
}
void integerset::insertelement(int k)
{
if(validentry(k))
	set[k]=1;
else
	cerr<<"invalid insert attempted\n";
}
void  integerset::deleteelement(int m)
	{if(validentry(m))
	set[m]=0;
	else
		cerr<<"invalid delete attempted\n";
}
bool integerset::isequalto(const integerset &r)const
{
	for(int v=0;v<101;v++)
		if(set[v]!=r.set[v])
			return false;
	return true;
}