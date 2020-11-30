#include "Student.h"
using namespace std;

class ClassRoom
{
private:
    //Name of classroom object
    string CSC134;
    //Count of the number of students in the classroom
    int count;
    //Dynamic array of student objects (max 24)
    Student* studentClassList[24];
    //Read the input data file and create student objects
public:

    ClassRoom();
    void read();
    void print();
    //Class exam average
    double examAvg();
    //Sort functions
    void sortByExamAvg();
    void sortByLastName();
};
