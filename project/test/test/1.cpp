#include<iostream>
using namespace std;
int main()
{
int size=5;

int *name = new int[10];
for(int i=0;i<3;i++)
{
	cin>>name[i];
}
for(int i=0;i<3;i++)
{
	cout<<name[i]<<endl;
}





delete []name;
}