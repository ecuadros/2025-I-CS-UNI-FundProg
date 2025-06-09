#include "Undergranstudent.h"
using namespace std;


UndergranStudent::UndergranStudent(NameType name, DocType doctype, string document,ProfessionType profession, CycleType cycle, 
                                    CoursesType courses,CodeType code)
:Person(name, doctype, document)
{
    setCode (code);
    setCycle (cycle);
    setCourses(courses);
    setProfession(profession); 
    
        cout<<"Constructor UndergrandStudent ( "<< toString()<<");"<<endl;   
    
}

UndergranStudent::~UndergranStudent()
{
    cout<<"Llamando destructor.";
} 