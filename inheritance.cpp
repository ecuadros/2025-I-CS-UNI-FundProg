#include <iostream>
#include "inheritance.h"
#include "academico/professor.h"
#include "academico/student.h"
#include "academico/gradstudent.h"

using namespace std;

void DemoInheritance(){
    cout << "Demo Inheritance "<< endl;   

    GradStudent gradStudent("Alice", DocTypePassport, "912345123", "Computer Science", "AI Research");
    cout << endl;
    Professor prof ("Dr. Smith", DocTypeDNI, "987654321", 5000.0);
}








