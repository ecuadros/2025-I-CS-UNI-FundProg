#ifndef __UNDERGRADSTUDENT_H__
#define __UNDERGRADSTUDENT_H__

#include "student.h"

class UndergradStudent : public Student{
    private:
        TermType m_term;
    public:
        UndergradStudent(NameType name, DocType doctype, string document, 
                         string career, TermType term);
        virtual ~UndergradStudent();

        void setTerm(TermType term) { m_term = term;  }
        TermType getTerm()          { return m_term;  }

        string      toString(){
            ostringstream ostr;
            ostr << Student::toString() 
                 << " NumTerm: " << getTerm();
            return ostr.str();
        }
};

#endif // __UNDERGRADSTUDENT_H__