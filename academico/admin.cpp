#include "admin.h"
using namespace std;

Admin::Admin(NameType name, DocType doctype, string document, SalaryType salary, OfficeType office)
      : Person(name, doctype, document)
{
    setOffice(office); 
    setSalary(salary);
    cout << "Constructor Admin(" << toString() << ");" << endl;
}

Admin::~Admin(){
    cout << "Destructor Admin(" << toString() << ");" << endl;
}