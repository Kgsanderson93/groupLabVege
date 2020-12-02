//
// Class: Student.h                                         
//                                                                   
// Description:
// Class that includes parameters for a student object. The number of students is limited to 24, and functions are initialized to categorize and set student data
// from the file students.txt when it is parsed Classroom.cpp, as well as calculate the average exam score.
//
// List of data members
// const string studentFirstName, const string studentLastName, string ssn, double examGrades[4], double examAvg, static int studentNumber;
// List of member functions                                       
// student(string StudentFirstName, string StudentLastName, string ssn, double examGrades[4]), string getFirstName(), string getLastName(), string getSSN(),
// double getExamGrades(), double getExamAvg(), void setStudentFirstName(string studentFirstName), void setStudentLastName(string studentLastName),
// void setSSN(string ssn), void setExamGrades(double[4]), void print(), void calcAvg(),
///////////////////////////////////////////////////////////////////////
#include<iostream>
#include<string>
using namespace std;


class Student
{
private:

	//Initialize attribute parameters for a new student object
	const string studentFirstName;
	const string studentLastName;
	string ssn;
	//double examGrades[4];
	double* examGrades;
	double examAvg;

public:
	~Student();
	//student number initially set to zero.
	static int studentNumber;
	Student();
	Student(string StudentFirstName, string StudentLastName, string ssn, double* examGrades);
	
	//Initialize getter functions for each attribute
	const string getFirstName();
	const string getLastName();
	string getSSN();
	double* getExamGrades();
	double getExamAvg();

	//Initialize setter functions for each attribute
	void setStudentFirstName(string* studentFirstName);
	void setStudentLastName(string* studentLastName);
	void setSSN(string ssn);
	void setExamGrades(double examGrades[4]);

	//Initialize calculate Average function
	void calcAvg();

	//Initialize display function
	void displayStudent();
	
};