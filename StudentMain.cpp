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
	csc134.sortByExamAvg();
	csc134.print();

	system("pause");
	return 0;
}
