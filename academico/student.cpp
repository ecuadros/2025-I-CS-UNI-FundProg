#include "student.h"
using namespace std;

Student::Student(NameType name, DocType doctype, string document, string career)
        : Person(name, doctype, document)
{
    setCareer(career);
    cout << "Constructor Student(" << toString() << ");" << endl;
}

Student::~Student(){
    cout << "Destructor Student(" << toString() << ");" << endl;
} 