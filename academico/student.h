#ifndef __STUDENT_H__
#define __STUDENT_H__

#include "person.h"

class Student : public Person{
    private:
        string m_career;
    
    public:
        Student(NameType name, DocType doctype, string document, string career);
        virtual ~Student();

        void setCareer(string career)  { m_career = career;   }
        string getCareer()             { return m_career;     }

        string      toString(){
            ostringstream ostr;
            ostr << Person::toString() 
                 << " Career: " << getCareer();
            return ostr.str();
        }
};

#endif // __STUDENT_H__