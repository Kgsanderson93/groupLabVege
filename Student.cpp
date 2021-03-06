//
// Class: Student.cpp                                         
//                                                                   
// Description:
// This class includes the getter and setter functions for a new student object when it is created.
//
// List of member functions                                       
// getFirstName(), getLastName(), getSSN(), getExamGrades(), getExamAvg(), setStudentFirstName(), setSSN(), setExamGrades(), calcAvg(),  displayStudent()
///////////////////////////////////////////////////////////////////////
#include<iostream>
#include<string>
#include"Student.h"
#include<iomanip>
using namespace std;

//Start student count at 0. It will be increased or decreased for each count of students being created or removed
int Student::studentNumber = 0;
//initialize this pointers
Student::Student() :studentFirstName("jane"), studentLastName("doe"), ssn("***-**-****")
{
    //examGrades count starts at 0
    this->examAvg = 0;
    this->examGrades = new double[4];
    for (int i = 0; i < 4; ++i)
    {
        this->examGrades[i] = 0;
    }

}

Student::~Student()
{
    delete this->examGrades;
}
//parameterized initializer function for pointers
Student::Student(string studentFirstName, string studentLastName, string ssn, double* grades) : studentFirstName(studentFirstName), studentLastName(studentLastName), ssn(ssn)
{

    this->examGrades = new double[4];

    ///for loop counts from 0 to 3 to keep track of the 4 exams
    for (int i = 0; i < 4; ++i)
    {
        this->examGrades[i] = grades[i];
    }

    calcAvg();
}

//Return values for getter functions

///////////////////////////////////////////////////////////////////////
//
// Function: getFirstName()                                          
//                                                                   
// Description:
//    A getter function for the first name
//                                                      
// Returns:  
//    studentFirstName : The first name of the student                 
//                                            
///////////////////////////////////////////////////////////////////////

const string Student::getFirstName()
{
    return studentFirstName;
}

///////////////////////////////////////////////////////////////////////
//
// Function: getLastName()                                          
//                                                                   
// Description:
//    A getter function for the student's last name
//                                                     
// Returns:  
//    studentLastName : The last name of the student                 
//                                            
///////////////////////////////////////////////////////////////////////

const string Student::getLastName()
{
    return studentLastName;
}

///////////////////////////////////////////////////////////////////////
//
// Function: getSSN()                                          
//                                                                   
// Description:
//    A getter function for the student's Social Security Number                
//                                                       
// Returns:  
//    ssn : The student's Social Security Number                 
//                                            
///////////////////////////////////////////////////////////////////////

string Student::getSSN()
{
    return ssn;
}

///////////////////////////////////////////////////////////////////////
//
// Function: getExamGrades()                                          
//                                                                   
// Description:
//    A getter function for the student's exam grades                  
//                                                       
// Returns:  
//    examGrades : An array containing the student's exam grades                 
//                                            
///////////////////////////////////////////////////////////////////////

double* Student::getExamGrades()
{
    return examGrades;
}

///////////////////////////////////////////////////////////////////////
//
// Function: getExamAvg()                                          
//                                                                   
// Description:
//    A getter function for the student's average exam score                  
//                                                       
// Returns:  
//    examAvg : The average exam score for the student                 
//                                            
///////////////////////////////////////////////////////////////////////

double Student::getExamAvg()
{
    return examAvg;
}

///////////////////////////////////////////////////////////////////////
//
// Function: setStudentFirstName()                                          
//                                                                   
// Description:
//    A setter function for the student's first name
//
// Parameters:  
//    studentFirstName : The first name of the student object                                    
//                                            
///////////////////////////////////////////////////////////////////////

void Student::setStudentFirstName(string* studentFirstName)
{
    studentFirstName = studentFirstName;
}

///////////////////////////////////////////////////////////////////////
//
// Function: setStudentLastName()                                          
//                                                                   
// Description:
//    A setter function for the student's last name
//
// Parameters:  
//    studentLastName : The last name of the student object                                    
//                                            
///////////////////////////////////////////////////////////////////////

void Student::setStudentLastName(string* studentLastName)
{
    studentLastName = studentLastName;
}

///////////////////////////////////////////////////////////////////////
//
// Function: setSSN()                                          
//                                                                   
// Description:
//    A setter function for the student's Social Security Number
//
// Parameters:  
//    ssn : The Social Security Number for the student object                                    
//                                            
///////////////////////////////////////////////////////////////////////

void Student::setSSN(string ssn)
{
    this->ssn = ssn;
}

///////////////////////////////////////////////////////////////////////
//
// Function: setExamGrades()                                          
//                                                                   
// Description:
//    A setter function for the student's exam scores
//
// Parameters:  
//    examGrades : An array containing the exam scores for a student object                                   
//                                            
///////////////////////////////////////////////////////////////////////

void Student::setExamGrades(double examGrades[4])
{
    for (int i = 0; i < 4; ++i)
    {
        this->examGrades[i] = examGrades[i];
    }
}

///////////////////////////////////////////////////////////////////////
//
// Function: calcAvg()                                          
//                                                                   
// Description:
//    Calculates the average score in an array of exam scores
//
// Parameters:  
//    ExamGrades         
//                                                       
// Returns:  
//    ExamAverage              
//                                            
///////////////////////////////////////////////////////////////////////

void Student::calcAvg()
{
    double sum = 0;
    for (int i = 0; i < 4; ++i)
    {
        sum += examGrades[i];
    }
    examAvg = sum / 4;

}

///////////////////////////////////////////////////////////////////////
//
// Function: displayStudent()                                          
//                                                                   
// Description:
//    Displays the attributes for each student object
//
// Parameters:  
//    studentFirstName, studentLastName, ssn, examgrades, examAvg         
//                                                                                                                  
///////////////////////////////////////////////////////////////////////

void Student::displayStudent()
{
    cout <<left<< setfill(' ')<< setw(10)<< studentFirstName << setw(10)  << studentLastName<< setw (12) << ssn;
    for (int i = 0; i < 4; ++i) {
        cout << setw(8) << fixed << setprecision(2) << examGrades[i];
    }
    cout << setw(8) << examAvg;
    cout << endl;
}
