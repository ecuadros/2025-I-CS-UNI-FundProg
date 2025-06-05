#include <iostream>
#include "inheritance.h"
#include "academico/professor.h"
#include "academico/student.h"
#include "academico/undergradStudent.h"
#include "academico/gradStudent.h"
#include "academico/admin.h"
using namespace std;

void DemoInheritance(){
    cout << "DemoInheritance" << endl;

    Professor p1 ("Ernesto", DocTypeDNI, "12345678", 100);
    Student s1 ("Mario", DocTypeCE, "3452342", "Physics");
    UndergradStudent u1 ("Yamil", DocTypeDNI, "87654321", "Computer Science", 2);
    GradStudent g1 ("Manuel", DocTypeDNI, "12312322", "Civil Engineering", "MSc");
    Admin a1 ("Juan", DocTypeDNI, "3333", 1025, "OCAD");
     
}