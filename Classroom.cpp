//
// Class: Classroom.cpp                                          
//                                                                   
// Description:
// This class contains the sorting functions for a new classroom object.     
//
// List of member functions                                       
// read(), print(), examAvg, sortByLastName, sortByExamAvg
///////////////////////////////////////////////////////////////////////
#include<iostream>
#include<string>
#include<fstream>
#include"Classroom.h"
using namespace std;

ClassRoom::ClassRoom() {//Classroom constructor function
    this->count = 0;
    this->studentClassList = new Student * [MAX_SIZE];
}

ClassRoom::~ClassRoom()
{
    //delete everything in student class list
    int hold = count;
    for (int i = 0; i < hold; i++) {
        delete this->studentClassList[i];
        count--;
    }

    //then delete studentClassList
    delete this->studentClassList;
}

///////////////////////////////////////////////////////////////////////
//
// Function: read()                                          
//                                                                   
// Description:
//    Opens the students.txt file and stores the information in the student variables using pointer objects
//
// Parameters:  
// int size = 0; string studentFirstName; string studentLastName; string ssn; double examGrades[4]; double examAvg; int current = 0;
//                                                                                          
///////////////////////////////////////////////////////////////////////

void ClassRoom::read()
{
    //open file and create student objects
    ifstream fin;
    fin.open("students.txt");

    int size = 0;
    string studentFirstName;
    string studentLastName;
    string ssn;
    double examGrades[4];
    double examAvg;
    int current = 0;

    // classroom initializer function
    //have to check if open or error will occur if not.
    if (fin.is_open())
    {
            while (!fin.eof())//until end of file.
        {
            fin >> studentFirstName;
            fin >> studentLastName;
            fin >> ssn;
            fin >> examGrades[0];
            fin >> examGrades[1];
            fin >> examGrades[2];
            fin >> examGrades[3];

            studentClassList[current] = new Student(studentFirstName, studentLastName, ssn, examGrades);


            current++;
            Student::studentNumber++;
        }
    }
    else {

        cout << "File fails to open" << endl;
    }
    count = Student::studentNumber;
}
///////////////////////////////////////////////////////////////////////
//
// Function: getCount()                                        
//                                                                   
// Description:
//    Displays the number of student objects stored in the studentClassList array
//
// Returns:                  
// count                                        
///////////////////////////////////////////////////////////////////////
int ClassRoom::getCount()
{
    return count;
}
///////////////////////////////////////////////////////////////////////
//
// Function: print()                                         
//                                                                   
// Description:
//    Displays the student objects stored in the studentClassList array
//
// Parameters:  
// studentClassList             
//                                                       
// Returns:                  
// displayStudent                                        
///////////////////////////////////////////////////////////////////////

void ClassRoom::print()
{
    for (int i = 0; i < count; i++) {
        studentClassList[i]->displayStudent();
    }
}

///////////////////////////////////////////////////////////////////////
//
// Function: examAvg()                                          
//                                                                   
// Description:
//    Calculates the average exam score of all the students
//
// Parameters:  
// avg, currentStudent             
//                                                       
// Returns:  
// examAvg : The average grade of all the students                 
//                                            
///////////////////////////////////////////////////////////////////////

double ClassRoom::examAvg()
{
    double avg = 0;
    double currentStudent = 0;
    for (int i = 0; i < count; i++) {
        currentStudent = studentClassList[i]->getExamAvg();
        avg = avg + currentStudent;
    }
    double exmAvg = avg / count;
    return exmAvg;
}

///////////////////////////////////////////////////////////////////////
//
// Function: sortByExamAvg()                                          
//                                                                   
// Description:
//    Sorts the list of students by using their exam score
//
// Parameters:  
// ExamAvg                 
//                                                                                                 
///////////////////////////////////////////////////////////////////////

void ClassRoom::sortByExamAvg()
{
    int smallest = 0;
    Student* hold;
    for (int i = 0; i < count - 1; i++) {
        smallest = i;
        for (int current = i + 1; current < count; current++) {
            if (studentClassList[current]->getExamAvg() < studentClassList[smallest]->getExamAvg()) {
                smallest = current;
            }
        }
        hold = studentClassList[smallest];
        studentClassList[smallest] = studentClassList[i];
        studentClassList[i] = hold;
    }
}

///////////////////////////////////////////////////////////////////////
//
// Function: sortByLastName()                                          
//                                                                   
// Description:
//    Sorts the list of students by using their last name
//
// Parameters:  
// studentLastName             
//                                                                                                   
///////////////////////////////////////////////////////////////////////

void ClassRoom::sortByLastName()
{

    int smallest = 0;
    Student* hold;
    int compare;
    for (int i = 0; i < count - 1; i++) {
        smallest = i;
        for (int current = i + 1; current < count; current++) {
            compare = strcmp(studentClassList[current]->getLastName().c_str(), studentClassList[smallest]->getLastName().c_str());
            if (compare < 0) { // can we use == here instead srtcmp?
                smallest = current;
            }
        }
        hold = studentClassList[smallest];
        studentClassList[smallest] = studentClassList[i];
        studentClassList[i] = hold;
    }
}
