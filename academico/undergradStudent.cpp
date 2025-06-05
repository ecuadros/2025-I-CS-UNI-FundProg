#include "undergradStudent.h"
using namespace std;

UndergradStudent::UndergradStudent(NameType name, DocType doctype, string document, string career, TermType term)
                 : Student(name, doctype, document, career)
{
    setTerm(term);
    cout << "Constructor UndergradStudent(" << toString() << ");" << endl;
}

UndergradStudent::~UndergradStudent(){
    cout << "Destructor UndergradStudent(" << toString() << ");" << endl;
} 