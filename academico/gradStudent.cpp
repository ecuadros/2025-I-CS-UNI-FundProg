#include "gradStudent.h"
using namespace std;

GradStudent::GradStudent(NameType name, DocType doctype, string document, string career, string degree)
            : Student(name, doctype, document, career)
{
    setDegree(degree);
    cout << "Constructor GradStudent(" << toString() << ");" << endl;
}

GradStudent::~GradStudent(){
    cout << "Destructor GradStudent(" << toString() << ");" << endl;
}