#include<iostream>
using namespace std;
#include "basepluscommissionemployee.h"
BasePlusCommissionEmployee::BasePlusCommissionEmployee(
	const string &first,const string &last,const string &ssn,
	double sales,double rate,double salary):commissionEmployee(first,last,ssn,sales,rate)
{
	setBaseSalary(salary);
}
void BasePlusCommissionEmployee::setFirstName(const string &first)
{
	commissionEmployee.setFirstName(first);
}
string BasePlusCommissionEmployee::getFirstName()const
{
	return commissionEmployee.getFirstName();
}
void BasePlusCommissionEmployee::setLastName(const string &last)
{
	commissionEmployee.setLastName(last);
}
string BasePlusCommissionEmployee::getLastName()const
{
	return commissionEmployee.getLastName();
}
void BasePlusCommissionEmployee::setSocialSecurityNumber(const string &ssn)
{
	commissionEmployee.setSocialSecurityNumber(ssn);
}
string BasePlusCommissionEmployee::getSocialSecurityNumber()const
{
	return commissionEmployee.getSocialSecurityNumber();
}
void BasePlusCommissionEmployee::setGrossSales(double sales)
{
	commissionEmployee.setGrossSales(sales);
}
double BasePlusCommissionEmployee::getGrossSales()const
{
	return commissionEmployee.getGrossSales();
}
void BasePlusCommissionEmployee::setCommissionRate(double rate)
{
	commissionEmployee.setCommissionRate(rate);
}
double BasePlusCommissionEmployee::getCommissionRate()const
{
	return commissionEmployee.getCommissionRate();
}
void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
	baseSalary=(salary<0.0)?0.0:salary;
}
double BasePlusCommissionEmployee::getBaseSalary()const
{
	return baseSalary;
}
double BasePlusCommissionEmployee::earnings()const
{
	return getBaseSalary()+commissionEmployee.earnings();
}
void BasePlusCommissionEmployee::print()const
{
	cout<<"base-salaried";
	commissionEmployee.print();
	cout<<"\nbase salary:"<<getBaseSalary();
}

