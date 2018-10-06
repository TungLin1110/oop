#include <iostream> 
using namespace std; 

#include "Complex.h"

int main()
{
    Complex a(3,8), b(7,1); 

    a.print(); 
    cout << "x";
    b.print(); 
    cout << "=";
    a.multiply(a,b); 
    a.print();

	cout<<"\n";
	a.setNumber(1,5);
	b.setNumber(3,4);
	a.print(); 
    cout << "%";
    b.print(); 
    cout << "=";
	a.divide(a,b); 
    a.print();

}