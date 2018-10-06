#include<iostream>
#include<string>
#include"GradeBook.h"
using namespace std;

int main()
{
	GradeBook gradeBook("CS101 Introduction to C++ Programming","Mr.A");
	cout <<"gradebook instrustor is : "<<gradeBook.getInstructorName()<<endl;
	gradeBook.setInstructorName("Mr.B");
	cout<<"new gradebook instrustor is : "<<gradeBook.getInstructorName()<<endl;

	gradeBook.displayMessage();

	
}
