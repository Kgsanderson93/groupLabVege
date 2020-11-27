#include<iostream>
#include<string>
#include<fstream>
#include"Classroom.h"
#include"Student.h"

using namespace std;

ClassRoom::ClassRoom() {//Classroom constructor function

}

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
    int current = 0;

    // classroom initializer function
    if(fin.is_open()){//have to check if open or error will occur if not. 
    while (!fin.eof())//until end of file. 
    {
        fin >> studentFirstName;
        fin >> studentLastName;
        fin >> ssn;
        fin >> examGrades[0];
        fin >> examGrades[1];
        fin >> examGrades[2];
        fin >> examGrades[3];
        
        studentClassList [current]= new student(studentFirstName, studentLastName, ssn, examGrades);

        current++;
        student::num++;
    }
    }
    else {
        return 1;
        cout << "File fails to open"<< endl;
    }
    count = student::num;
}


void ClassRoom::print()
{
    for (int i = 0; i < count; i++) {
        studentClassList[i].displayStudent();
    }
}


double ClassRoom::examAvg()
{
    double avg = 0;
    double currentStudent = 0;
    for (int i = 0; i < count; i++) {
        currentStudent = studentClassList[i].getExamAvg();
        avg = avg + currentStudent;
    }
    double exmAvg = avg / count;
    return exmAvg;
}


void ClassRoom::sortByExamAvg()
{

}


void ClassRoom::sortByLastName()
{
}