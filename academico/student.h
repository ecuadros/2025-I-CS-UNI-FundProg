#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <sstream>
#include "person.h"

class Student : public Person {
    private: 
        string m_Career= "NoCareer";
    public:
        
        Student(NameType name, DocType doctype, string document, string career);

        virtual ~Student();
        void setCareer(const string career) { m_Career = career; }
        string getCareer() { return m_Career; }
        string toString() {
            std::ostringstream ostr;
            ostr << Person::toString() << " Career: " << getCareer();
            return ostr.str();
        }
};


#endif
