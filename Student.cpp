#include "Student.h"
#include <iostream>
#include<cstring>

using namespace std;

// Assign studentId and name
Student::assignDetails(int id, char pName[])
{
  studentId = id;
  strcpy(name, pName);
}

// Display StudentId and Name
Student::display() 
{
  cout << "student ID :" <<   studentId << endl;
  cout << "student Name :" << name << endl;
}
