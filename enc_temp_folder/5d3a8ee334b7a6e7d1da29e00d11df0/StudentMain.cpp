///////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: StudentMain.cpp
// Date: November 25, 2020
// Programmers: David Shostak, Kayla Sanderson, Donovan Young Wake           
//
// Description:
// This class contains drivers for the classroom objects.
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
	cout << endl;
	cout << "Student data sorted by exam average" << endl;
	csc134.sortByExamAvg();
	csc134.print();
	cout << endl;
	double examAvg = csc134.examAvg();
	cout << "The total average of the class is: " << examAvg << endl;
	int count = csc134.getCount();
	cout << "the number of students created in the Classroom is " << count << endl;
	system("pause");
	return 0;
}
