#ifndef __PERSONA_H__
#define __PERSONA_H_

#include <string>
using namespace std;
class Persona{
private:
    string nombre;
    int edad;

public:
    //Constructor.
    Persona(string nombre,int edad);

    //Metodos.
    void saludar();
    void setEdad(int nuevaEdad);
    int getEdad();
};





#endif