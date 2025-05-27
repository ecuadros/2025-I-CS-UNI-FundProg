#include <iostream>
#include "classes.h"
#include "person.h"
using namespace std;

void DemoClasses(){
    // Person persona1("Fabricio",19); // Entregamos los datos al constructor y crea el objeto persona.
    Person persona1; // Entregamos los datos al constructor y crea el objeto persona.
    persona1.setName("Fabricio");
    persona1.setAge(19);
    cout << persona1;
    //Pasan unos años y queremos hacer un get and setter del objeto.
    persona1.setAge(25);
    cout <<"Nueva edad :" << persona1.getAge()<< endl;
    cout << persona1;

    Person persona2("Wily", 19);
    cout << persona2;
    persona2 += 3;      // persona2.operator+=(3);
    cout << persona2;
    int x = 5;
    cout << "=========================" << endl;
    cout << persona2 << x << persona1 << "4to parametro" << endl;
    cout << "=========================" << endl;
    
    Person persona3;
    cout << persona3;

    Person *pPerson4 = nullptr;
    pPerson4 = new Person("Nicole", 18);
    cout << *pPerson4;
    delete pPerson4;

    // cout << persona1;


} // Aqui recien se destruyen persona1, persona2, persona3 