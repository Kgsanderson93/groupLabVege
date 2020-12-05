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
	ClassRoom csc134 = ClassRoom();
	csc134.read();
	cout << "Student data sorted by last name" << endl;
	csc134.sortByLastName();
	csc134.print();
	cout << "Student data sorted by exam average" << endl;
	csc134.sortByExamAvg();
	csc134.print();
	double examAvg = csc134.examAvg();
	cout << "The total average of the class is:" << examAvg << endl;
	system("pause");
	return 0;
}
