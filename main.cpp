//Snyder, Aedan C.
//Professor Tavakoli
//ECE231 Fall 2026
//October 20, 2026

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>
using namespace std; //for shorthand, again.

class Student
{
	protected: //base class attributes/fields
		string fName;
		string lName;
		double GPA;
		int gradYr;
		string gradSem;
		int startYr;
		string startSem;
		bool isGrad;
	public:
		Student(); //default constructor
		virtual ~Student(); //deconstructor, inheritance demonstration. virtual deconstructor makes sure to clean up derived data AND base class in the right order, to prevent crashes/UB
//SETTERS to change private fields
	void setName(string f, string l) 
	{
		fName = f; lName = l;
	}
	void setGPA(double g) 
	{
		GPA = g;
	}
	void setgrad(int y, string s) 
	{
		gradYr = y; gradSem = s;
	}
	void setstart(int y, string s) 
	{
		startYr = y; startSem = s;
	}
	void setgrad(bool g) 
	{
		isGrad = g;
	}
//GETTERS to read private fields
	string getfName() const 
	{
		return fName;
	}
	string getlName() const 
	{
		return lName;
	}
	double getGPA() const 
	{
		return GPA;
	}
	int getgradYr() const 
	{
		return gradYr;
	}
	string getgradSem() const 
	{
		return gradSem;
	}
	int getstartYr() const 
	{
		return startYr;
	}
	string getstartSem() const 
	{
		return startSem;
	}
	bool getGrad() const 
	{
		return isGrad;
	}
};
//CONSTRUCTOR
Student::Student()
{
	//default values. this is the best I could think of in place of real values or defaults. 
	fName = "?";
	lName = "?";
	GPA = 0.0;
	gradYr = 0;
	gradSem = "?";
	startYr = 0;
	startSem = "?";
	isGrad = false;
}
//DESTRUCTOR
Student::~Student()
{
	//MAIN calls new and delete, not Student(). So destructor doesn't have anything to free. BUT...it's still here.
}
//Derived class for art students
Class Art_Student:public Student
{

