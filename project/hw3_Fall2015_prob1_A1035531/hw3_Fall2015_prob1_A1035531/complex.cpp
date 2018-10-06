#include<iostream>
#include"complex.h"
using namespace std;
Complex::Complex(double real,double imaginary)
{
	setNumber(real,imaginary);
}
void Complex::multiply(Complex c1,Complex c2)
{
	realPart=c1.realPart*c2.realPart-c1.imaginaryPart*c2.imaginaryPart;
	imaginaryPart=c1.realPart*c2.imaginaryPart+c1.imaginaryPart*c2.realPart;
}
void Complex::divide(Complex c1,Complex c2)
{
	
	realPart=(c1.realPart*c2.realPart+c1.imaginaryPart*c2.imaginaryPart)/(c2.realPart*c2.realPart+c2.imaginaryPart*c2.imaginaryPart);
	imaginaryPart=(c1.imaginaryPart*c2.realPart-c1.realPart*c2.imaginaryPart)/(c2.realPart*c2.realPart+c2.imaginaryPart*c2.imaginaryPart);
}
void Complex::print()
{
	cout<<'('<<realPart<<","<<imaginaryPart<<')';
}
void Complex::setNumber(double r,double i)
{
	realPart=r;
	imaginaryPart=i;
}

