///////////////////////////////////////////////////////////////////////
//
// Class: Classroom.h                                         
//                                                                   
// Description: 
// Initializes parameters of a classroom object. 
//
// List of data members
// string name, int count, student s[24]
// List of member functions                                       
// void read(), void print(), void examAvg(), void sortByExamAvg(), void sortByLastName()
///////////////////////////////////////////////////////////////////////
#include "Student.h"
using namespace std;

class ClassRoom
{
private:
    const int MAX_SIZE = 24;
    //Name of classroom object
    string CSC134; //string courseName;
    //Count of the number of students in the classroom
    int count;
    //Dynamic array of student objects (max 24)
    //Student studentClassList[24];
    Student** studentClassList;
    //Read the input data file and create student objects
public:

    ClassRoom(); //this->studentClassList = new Student[this->count];
    ~ClassRoom();
    void read();
    void print();
    //Class exam average
    double examAvg();
    //Sort functions
    void sortByExamAvg();
    void sortByLastName();
};

