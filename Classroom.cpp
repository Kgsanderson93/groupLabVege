#include<iostream>
#include<string>
#include<fstream>
#include"Classroom.h"
using namespace std;


void ClassRoom::read()
{
    //open file and create student objects
    ifstream fin("student.txt");
    int size = 0;
    string studentFirstName;
    string studentLastName;
    string ssn;
    double examGrades[4];
    double examAvg;
    int i = 0;

    //Classroom constructor function
    while (fin >> studentFirstName)
    {
        fin >> studentLastName;
        fin >> ssn;
        fin >> examGrades[0];
        fin >> examGrades[1];
        fin >> examGrades[2];
        fin >> examGrades[3];
        s[i].setStudentFirstName(studentFirstName);
        s[i].setStudentLastName(studentLastName);
        s[i].setSSN(ssn);
        s[i].setExamGrades(examGrades);
        s[i].calcAvg();
        i++;
        student::num++;
    }
    count = student::num;
}


void ClassRoom::print()
{
}


void ClassRoom::examAvg()
{
}


void ClassRoom::sortByExamAvg()
{
}


void ClassRoom::sortByLastName()
{
}