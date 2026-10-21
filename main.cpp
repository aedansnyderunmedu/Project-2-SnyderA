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
	void setname(string f, string l) 
	{
		fName = f; lName = l;
	}
	void setgpa(double g) 
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
	void setisgrad(bool g) 
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
	bool getgrad() const 
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
	private:
		string emphasis;
	public:
		Art_Student()
		{
			emphasis = "?";
		}
		~Art_Student()
		{
			//again nothing, this memory goes back to heap. string emphasis manages itself. 
		}
		void setemphasis(string e)
		{
			if(e == "Art Studio" || e == "Art History" || e == "Art Education")
			{
				emphasis = e;
			}
			else
				emphasis = "?";
		}
		string getemphasis() const
		{
			return emphasis;
		}
};
//Derived class for physics students
Class Physics_Student:public Student
{
	private:
		string concentration;
	public:
		Physics_Student()
		{
			concentration = "?";
		}
		~Physics_Student()
		{
			//yet again, nothing to free here.
		}
		void setconcentration(string c)
		{
			if(c == "Biophysics" || c == "Earth and Planetary Sciences")
			{
				concentration = c;
			}
			else
				concentration = "?";
		}
};
//MAIN starts here
int main()
{
	vector<Art_Student*> astudents; //vectors hold pointers, but individual students are heap-allocated.
	vector<Physics_Student*> pstudents;
	//art students
	for(int i = 0; i < 5; i++)
	{
		astudents.push_back(new Art_Student);
	}
	astudents[0]->setname("John", "Doe");
	astudents[0]->setgpa(3.5);
	astudents[0]->setgrad(2030, "Spring");
	astudents[0]->setstart(2026, "Spring");
	astudents[0]->setisgrad(false);
	astudents[0]->setemphasis("Art Studio");
	
	astudents[1]->setname("Jane", "Doe");
	astudents[1]->setgpa(3.6);
	astudents[1]->setgrad(2029, "Summer");
	astudents[1]->setstart(2025, "Summer");
	astudents[1]->setisgrad(false);
	astudents[1]->setemphasis("Art History");

	astudents[2]->setname("Richard", "Roe");
	astudents[2]->setgpa(3.7);
	astudents[2]->setgrad(2028, "Fall");
	astudents[2]->setstart(2026, "Fall");
	astudents[2]->setisgrad(false);
	astudents[2]->setemphasis("Art Studio");

	astudents[3]->setname("Tommy", "Atkins");
	astudents[3]->setgpa(3.8);
	astudents[3]->setgrad(2030, "Winter");
	astudents[3]->setstart(2024, "Winter");
	astudents[3]->setisgrad(true);
	astudents[3]->setemphasis("Art Education");

	astudents[4]->setname("An", "Other");
	astudents[4]->setgpa(4.0);
	astudents[4]->setgrad(2028, "Spring");
	astudents[4]->setstart(2020, "Spring");
	astudents[4]->setisgrad(true);
	astudents[4]->setemphasis("Art History");

	//physics students
	for(int i = 0; i < 5; i++)
	{
		pstudents.push_back(new Physics_Student);
	}	
	pstudents[0]->setname();
	pstudents[0]->setgpa();
	pstudents[0]->setgrad();
	pstudents[0]->setstart();
	pstudents[0]->setisgrad();
	pstudents[0]->setconcentration();

	pstudents[0]->setname();
	pstudents[0]->setgpa();
	pstudents[0]->setgrad();
	pstudents[0]->setstart();
	pstudents[0]->setisgrad();
	pstudents[0]->setconcentration();

	pstudents[0]->setname();
	pstudents[0]->setgpa();
	pstudents[0]->setgrad();
	pstudents[0]->setstart();
	pstudents[0]->setisgrad();
	pstudents[0]->setconcentration();

	pstudents[0]->setname();
	pstudents[0]->setgpa();
	pstudents[0]->setgrad();
	pstudents[0]->setstart();
	pstudents[0]->setisgrad();
	pstudents[0]->setconcentration();

	pstudents[0]->setname();
	pstudents[0]->setgpa();
	pstudents[0]->setgrad();
	pstudents[0]->setstart();
	pstudents[0]->setisgrad();
	pstudents[0]->setconcentration();




















