#include<iostream>
using namespace std;
namespace dimensionTwo{
	void print(){
	cout << "This is dimensionTwo.\n" << endl;
	}
}
namespace dimensionThree{
	void print(){
	cout << "This is dimensionThree.\n" << endl;
	}
}
int main(){
	
using namespace dimensionTwo ; print();

dimensionThree::print();
}