#ifndef __STRUCT_H__
#define __STRUCT_H__
#include <iostream> // string
using namespace std;

struct Student{
    string m_name;
    int    m_age; // Years
};

void DemoStructs();

void PrintStudentX(Student &s);
void PrintStudentX(Student *pStudent);

void PrintStudentY(Student &s);
void PrintStudentY(Student *pStudent);

#endif // __STRUCT_H__