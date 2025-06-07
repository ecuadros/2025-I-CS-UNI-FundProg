#include "gradstudent.h"
#include <iostream>
#include <sstream>
using namespace std;    

GradStudent::GradStudent(NameType name, DocType doctype, string document, string career, string thesisTitle)
    : Student(name, doctype, document, career) {
    setThesisTitle(thesisTitle);
    cout << "Constructor GradStudent(" << toString() << ");" << endl;

    
}
GradStudent::~GradStudent() {
    cout << "Destructor GradStudent(" << toString() << ");" << endl;
}