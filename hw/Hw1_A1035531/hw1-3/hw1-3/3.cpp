#include<iostream>
using namespace std;
int passbyvalue(int v){
	return v=v*4;
}
void passbyreference(int &v){
	v=v*4;
}
int main(){
	int a;
	cout<<"enter a number as the side of the square"<<endl;
	cin>>a;

	cout<<"number= "<<a<<" before byvalue"<<endl;
	cout<<"answer = "<<passbyvalue(a)<<endl;
	cout<<"number= "<<a<<" after byvalue\n"<<endl;
	cout<<"number= "<<a<<" before byreference"<<endl;
	passbyreference(a);
	cout<<"number="<<a<<" after byreference"<<endl;
	
}