#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std; //for shorthand, again.

class Student
{
	protected:
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
		virtual ~Student(); //deconstructor, inheritance demonstration
};

Student::Student()
{
	fName = "
