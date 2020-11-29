#include<iostream>
#include<string>
#include"Student.h"
using namespace std;

//Start student count at 0. It will be increased or decreased for each count of students being created or removed
int Student::studentNumber = 0;
//initialize this pointers
Student::Student()
{
    this-> studentFirstName = new string("");
    this-> studentLastName = new string("");
    this-> ssn = "";
    //examGrades count starts at 0
    for (int i = 0; i < 4; ++i)
    {
        this->examGrades[i] = 0;
    }

}

//parameterized initializer function for pointers
void Student::initializeStudent(string studentFirstName, string studentLastName, string ssn, double grades[4])
{

    this->studentFirstName = &studentFirstName;
    this->studentLastName = &studentLastName;
    this->ssn = ssn;
    //for loop counts from 0 to 3 to keep track of the 4 exams
    for (int i = 0; i < 4; ++i)
    {
        this->examGrades[i] = examGrades[i];
    }
    calcAvg();
}

//Return values for getter functions
const string* Student::getFirstName()
{
    return studentFirstName;
}
const string* Student::getLastName()
{
    return studentLastName;
}
string Student::getSSN()
{
    return ssn;
}
double* Student::getExamGrades()
{
    return examGrades;
}

double Student::getExamAvg()
{
    return examAvg;
}


void Student::setStudentFirstName(string* studentFirstName)
{
    this-> studentFirstName = studentFirstName;
}
void Student::setStudentLastName(string* studentLastName)
{
    this-> studentLastName = studentLastName;
}
void Student::setSSN(string ssn)
{
    this-> ssn = ssn;
}
void Student::setExamGrades(double examGrades[4])
{
    for (int i = 0; i < 4; ++i)
    {
        this-> examGrades[i] = examGrades[i];
    }
}

//Calculate Average function
void Student::calcAvg()
{
    double sum = 0;
    for (int i = 0; i < 4; ++i)
    {
        sum += examGrades[i];
    }
    examAvg = sum / 4;
    
}

//Display function
void Student::displayStudent()
{
    cout << studentFirstName << "   " << studentLastName << "   " << ssn;
    for (int i = 0; i < 4; ++i) {
        cout << "   " << examGrades[i];
    }
    cout << "   " << examAvg;
    cout << endl;
}
