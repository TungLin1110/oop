#include<iostream>
using namespace std;
#ifndef COMPLEX_H
#define COMPLEX_H
class Complex
{
public:
	Complex(double=0.0,double=0.0);
	void multiply(Complex,Complex);
	void divide(Complex,Complex);
	void print();
	void setNumber(double,double);
private:
	double realPart;
	double imaginaryPart;
};
#endif