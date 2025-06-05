#ifndef __GRADSTUDENT_H__
#define __GRADSTUDENT_H__

#include "student.h"

class GradStudent : public Student{
    private:
        string m_degree;
    public:
        GradStudent(NameType name, DocType doctype, string document, 
                    string career, string degree);
        virtual ~GradStudent();

        void setDegree(string degree) { m_degree = degree;  }
        string getDegree()            { return m_degree;     }

        string      toString(){
            ostringstream ostr;
            ostr << Student::toString() 
                 << " Degree: " << getDegree();
            return ostr.str();
        }
};

#endif // __GRADSTUDENT_H__