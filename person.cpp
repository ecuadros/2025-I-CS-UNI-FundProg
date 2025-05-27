#include <iostream>
#include "person.h"
using namespace std;
//Implementacion del constructor.

Person::Person(NameType name, AgeType age){
    setName(name);
    setAge (age);
    cout << "*** Constructor (" << getName() <<", " << getAge() << ");" << endl;
}

Person::Person()
    : Person("SinNombre", 10)
{

}

Person::~Person(){
    cout << "--- Destructor (" << getName() <<", " << getAge() << ");" << endl;
}
 
void Person::operator+=(int n){
    m_age += n;
}

