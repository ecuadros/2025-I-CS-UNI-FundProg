#ifndef __PROFESSOR_H__
#define __PROFESSOR_H__
#include <sstream>
#include "person.h"

class Professor : public Person{
private:  
    SalaryType m_salary;
public:
    Professor(NameType name, DocType doctype, string document, SalaryType salary);
    virtual ~Professor();

    void setSalary(SalaryType salary)  { m_salary = salary;   }
    SalaryType getSalary()             { return m_salary;     }

    string      toString(){
        ostringstream ostr;
        ostr << Person::toString() 
             << " Salary: " << getSalary();
        return ostr.str();
    }
};
#endif // __PROFESSOR_H__s