#include <iostream>
#include "person.h"
using namespace std;
//Implementacion del constructor.

Person::Person(NameType name, DocType doctype, string document){
    setName(name);
    setDocType(doctype);
    setDocument(document);
    cout << "Constructor Person(" << toString() << ");" << endl;
}

Person::Person()
    : Person("SinNombre", DocTypeNone, "Empty")
{
}

Person::~Person(){
    cout << "Destructor Persona(" << toString() << ");" << endl;
}




