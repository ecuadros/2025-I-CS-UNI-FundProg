#ifndef __PERSONA_H__
#define __PERSONA_H__

#include <iostream>
#include "types.h"
using namespace std;

class Person{
private:
    NameType m_name;
    AgeType  m_age;

public:
    // Constructor
    // 1. Tiene el mismo nombre que la clase (Person en este caso)
    // 2. Pueden haber varios
    // 3. Se invoca al declarar un objeto (estatico) o al crearlo con new (dinamico)
    // 4. No devuelve nada (ni siquiera void)
    // 5. Desde C++11 se pueden llamar entre constructores
    // 6. Solo se llama 1 de ellos
    Person();
    Person(NameType name, AgeType edad);

    // Destructor
    // 1. Tiene el mismo nombre que la clase pero con ~
    // 2. Pueden haber solo uno
    // 3. Se invoca al salir de las {} donde fue creado (estaticos) o
    //    cuando se destruye con delete
    // 4. No devuelve nada (ni siquiera void)
    // 5. No tiene parámetros
    // 5. Recomendable que siempre sea virtual
    virtual ~Person();

    // Metodos.
    // Funciones inline (pequeñas, sin bucles)
    void        setAge(const AgeType age)   {  m_age= age;      }
    AgeType     getAge()                    {  return m_age;    }
    void        setName(const NameType name){  m_name = name;   }    
    NameType    getName()                   {  return m_name;   }

    void operator+=(int n);
};

inline ostream &operator<<(ostream &os, Person &p){
    return os << "Hola, soy "<< p.getName() <<" y tengo "<< p.getAge() << " años (<<)" << endl;
}

#endif