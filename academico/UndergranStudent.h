#ifndef __UNDERGRANSTUDENT_H__
#define __UNDERGRANSTUDENT_H__
#include "person.h"


class UndergranStudent : public Person{
    private :  
       ProfessionType m_profession;
       CycleType      m_cycle;
       CoursesType    m_courses; 
       CodeType       m_code;

    public :
       UndergranStudent(NameType name, DocType doctype, string document, ProfessionType profession, CycleType cycle,
                        CoursesType courses,CodeType code);

       virtual ~UndergranStudent();

       void setProfession(const ProfessionType profession){m_profession = profession; }
       void setCycle     (const CycleType   cycle  )      {m_cycle   =    cycle;      }
       void setCourses   (const CoursesType courses)      {m_courses =    courses;    }
       void setCode      (const CodeType code)            {m_code =       code;       }

       ProfessionType getProfession(){return m_profession;}
       CycleType      getCycle()     {return m_cycle;     }
       CoursesType    getCourses()   {return m_courses;   }
       CodeType       getCode()      {return m_code;      }

       string toString(){
       ostringstream ostr;
       ostr << Person::toString()
            << " Code : " << getCode() << endl 
            << " Profession is : " << getProfession() << endl
            << " Cycle relative is : " << getCycle() << endl
            << " Courses : " << getCourses() << endl;
        return ostr.str(); 
    };


};


#endif //__UNDERGRANSTUDENT_H__