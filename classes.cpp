#include <iostream>
#include "classes.h"
#include "persona.h"
using namespace std;

void DemoClasses(){
    // Persona persona1("Fabricio",19); // Entregamos los datos al constructor y crea el objeto persona.
    Persona persona1; // Entregamos los datos al constructor y crea el objeto persona.
    persona1.setName("Fabricio");
    persona1.setAge(19);
    persona1.saludar();
    //Pasan unos años y queremos hacer un get and setter del objeto.
    persona1.setAge(25);
    cout <<"Nueva edad :" << persona1.getAge()<< endl;
    persona1.saludar();

    coutarea();
}