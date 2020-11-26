#include<iostream>
#include<string>
#include"Student.h"
using namespace std;

//Start student count at 0. It will be increased or decreased for each count of students being created or removed
int student::num = 0;
//initialize this pointers
student::student()
{
    this->firstName = "";
    this->lastName = "";
    this->ssn = "";
    //examGrades count starts at 0
    for (int i = 0; i < 4; ++i)
    {
        this->examGrades[i] = 0;
    }

}

//parameterized constructor for pointers
student::student(string studentFirstName, string studentLastName, string ssn, double grades[4])
{

    this->firstName = studentFirstName;
    this->lastName = studentLastName;
    this->ssn = ssn;
    //for loop counts from 0 to 3 to keep track of the 4 exams
    for (int i = 0; i < 4; ++i)
    {
        this->examGrades[i] = examGrades[i];
    }

}

//Return values for getter functions
string student::getFirstName()
{
    return studentFirstName;
}
string student::getLastName()
{
    return studentLastName;
}
string student::getSSN()
{
    return ssn;
}
double* student::getExamGrades()
{
    return examGrades;
}

double student::getExamAvg()
{
    return examAvg;
}


void student::setStudentFirstName(string studentFirstName)
{
    studentFirstName = setStudentFirstName;
}
void student::setStudentLastName(string studentLastName)
{
    studentLastName = setLastName;
}
void student::setSSN(string ssn)
{
    ssn = setSSN;
}
void student::setExamGrades(double[4])
{
    for (int i = 0; i < 4; ++i)
    {
        examGrades[i] = [i];
    }
}

//Calculate Average function
void student::calcAvg()
{
    double sum = 0;
    for (int i = 0; i < 4; ++i)
    {
        sum += examGrades[i];
    }
    avg = sum / 4;
}

//Display function
void student::display()
{
    cout << firstName << "   " << lastName << "   " << ssn;
    for (int i = 0; i < 4; ++i)
        cout << "   " << examGrades[i];
    cout << endl;
}
