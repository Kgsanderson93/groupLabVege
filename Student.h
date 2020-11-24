#include<iostream>
#include<string>
using namespace std;
class student
{
private:
	const string studentFirstName;
	const string studentLastName;
	string social;
	double examGrades[4];
	double examAvg;
	static int studentNumber;
public:
	void setStudentFirstName(string studentfirstName);
	void setStudentLastName(string studentLastName);
	void setStudentSocial(string social);
	void setExamGrades(double[4]);
	void setExamAvg(double[4]);
	void setStudentNumber();


};