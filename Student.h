#include<iostream>
#include<string>
using namespace std;


class student
{
private:

	//Initialize attribute parameters for a new student object
	const string studentFirstName;
	const string studentLastName;
	string ssn;
	double examGrades[4];
	double examAvg;

public:

	//student number initially set to zero.
	static int studentNumber;
	student();
	student(string StudentFirstName, string StudentLastName, string ssn, double examGrades[4]);
	
	//Initialize getter functions for each attribute
	string getFirstName();
	string getLastName();
	string getSSN();
	double getExamGrades();
	double getExamAvg();

	//Initialize setter functions for each attribute
	void setStudentFirstName(string studentFirstName);
	void setStudentLastName(string studentLastName);
	void setSSN(string ssn);
	void setExamGrades(double[4]);

	//Initialize calculate Average function
	void calcAvg();

	//Initialize display function
	void displayStudent();
	
};