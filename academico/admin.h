#ifndef __ADMIN_H__
#define __ADMIN_H__

#include "person.h"

class Admin : public Person{
    private:
        SalaryType m_salary;
        OfficeType m_office;
    
    public:
        Admin(NameType name, DocType doctype, string document, SalaryType salary, OfficeType office);
        virtual ~Admin();

        void setSalary(SalaryType salary)  { m_salary = salary;   }
        SalaryType getSalary()             { return m_salary;     }
        void setOffice(string office)      { m_office = office;   }
        OfficeType getOffice()             { return m_office;     }


        string      toString(){
            ostringstream ostr;
            ostr << Person::toString() 
                 << " Office: " << getOffice()
                 << " Salary: " << getSalary();
            return ostr.str();
        }
        
};

#endif // __ADMIN_H__