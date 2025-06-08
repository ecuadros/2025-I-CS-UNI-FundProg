#include "professor.h"
using namespace std;

Professor::Professor(NameType name, DocType doctype, string document, SalaryType salary)
         : Person(name, doctype, document)
{
    setSalary(salary);
    cout << "Constructor Professor(" << toString() << ");" << endl;
}

Professor::~Professor(){
    cout << "Destructor Professor(" << toString() << ");" << endl;
}