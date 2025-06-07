#ifndef __GRADSTUDENT_H__
#define __GRADSTUDENT_H__

#include "student.h"

class GradStudent : public Student {
    private:
        string m_ThesisTitle = "NoTitle";
    public:
        GradStudent(NameType name, DocType doctype, string document, string career, string thesisTitle);

        virtual ~GradStudent();

        void setThesisTitle(const string thesisTitle) { m_ThesisTitle = thesisTitle; }
        string getThesisTitle() { return m_ThesisTitle;}

        string toString() {
            std::ostringstream ostr;
            ostr << Student::toString() << " ThesisTitle: " << getThesisTitle();
            return ostr.str();
        }


            

};


#endif