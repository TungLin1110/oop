#include<iostream>
#include<string>
#include"GradeBook.h"
using namespace std;

GradeBook::GradeBook(string name,string instructor)
{
setCourseName(name);
setInstructorName(instructor);
}

void GradeBook::setCourseName(string name)
{
courseName = name;
}

string GradeBook::getCourseName()
{
return courseName;
}
void GradeBook::setInstructorName(string name)
{
instructorName = name;
}
string GradeBook::getInstructorName()
{
return instructorName;
}
void GradeBook::displayMessage()
{
cout<<"Welcome to the grade book for\n"<<getCourseName()<<"!"<<endl;
cout<<"This course is presented by : "<<getInstructorName()<<"!"<<endl;
}