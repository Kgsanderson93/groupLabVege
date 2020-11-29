#include<iostream>
#include<string>
#include<fstream>
#include"Classroom.h"


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
        
        studentClassList[current].initializeStudent(studentFirstName, studentLastName, ssn, examGrades);

        current++;
        Student::studentNumber++;
    }
    }
    else {
    
        cout << "File fails to open"<< endl;
    }
    count = Student::studentNumber;
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
    int smallest = 0;
    Student hold;
    for (int i = 0; i < count-1; i++) {
        smallest = i;
        for (int current= i+1; current<count; current++){
            if (studentClassList[current].getExamAvg() < studentClassList[smallest].getExamAvg()){
                smallest = current;
            }
        }
        hold = studentClassList[smallest];
        studentClassList[smallest] = studentClassList[i];
        studentClassList[i] = hold;
    }
}


void ClassRoom::sortByLastName()
{
    
  int smallest = 0;
  Student hold;
  int compare;
  for (int i = 0; i < count - 1; i++) {
   smallest = i;
      for (int current = i + 1; current < count; current++) {

          compare = strcmp(studentClassList[current].getLastName()->c_str(), studentClassList[smallest].getLastName()->c_str());
        if (compare < 0) {
          smallest = current;
        }
      }
   hold = studentClassList[smallest];
   studentClassList[smallest] = studentClassList[i];
   studentClassList[i] = hold;
  }
}
