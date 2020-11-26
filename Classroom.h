#include "Student.cpp"
using namespace std;


class ClassRoom
{
public:

    //Name of classroom object
    string CSC134;
    //Count of the number of students in the classroom
    int count;
    //Dynamic array of student objects (max 24)
    student s[24];
    //Read the input data file and create student objects
    void read();
    void print();
    //Class exam average
    void examAvg();
    //Sort functions
    void sortByExamAvg();
    void sortByLastName();
};