///////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: StudentMain.cpp
// Date: November 25, 2020
// Programmers: David Shostak, Kayla Sanderson, Donovan Young Wake           
//
// Description:
// 
// 
////////////////////////////////////////////////////////////////////////
#include"Classroom.h"
#include <iomanip>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	//ClassRoom csc134 = ClassRoom();
	//csc134.read();
	//csc134.sortByExamAvg();
	//csc134.print();
	ClassRoom csc134;
	csc134.read();
	cout << "Student data sorted by last name";
	csc134.sortByLastName();
	csc134.print();
	cout << "Student data sorted by exam average";
	csc134.sortByExamAvg();
	csc134.print();
	return 0;
	Student* x = new Student();
	string hold = "Lisa";
	string* point = &hold;
	x->setStudentFirstName(point);
	string recieve = x->getFirstName();
	cout << recieve << endl;
	system("pause");
	return 0;
}
