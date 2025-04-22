#include "persona.h"
#include <iostream>
using namespace std;
//Implementacion del constructor.
Persona::Persona(string nombre,int edad){
    this->nombre = nombre;
    this->edad = edad;
}
//Implementacion de metodos.
void Persona::saludar(){
    cout << "Hola,soy "<<nombre <<"y tengo "<< edad << "años. " << endl;
}
void Persona::setEdad(int nuevaEdad){
    if(nuevaEdad >= 0){
        edad = nuevaEdad;
    }
}
int Persona::getEdad(){
    return edad;
}