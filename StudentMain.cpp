#include"Classroom.h"
#include"Student.h"
#include <iomanip>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	ClassRoom csc134 = new ClassRoom();
	csc134.read();
	csc134.sortByExamAvg();
	csc132.display();
	return 0;
}
