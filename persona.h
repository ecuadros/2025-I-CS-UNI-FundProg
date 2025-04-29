#ifndef __PERSONA_H__
#define __PERSONA_H__

#include <cstring>
using namespace std;

class Persona{
private:
    string name;
    int edad;

public:
    //Constructor.
    //Persona(string name,int edad);

    //Metodos.
    void saludar();
    void setAge(int nuevaEdad);
    int  getAge();
    void    setName(string _name);    
    string  getName();
};

class figura{
    private:
    int altura;
    int base;

    public:
    void setaltura(int);
    void setbase(int);
    int getarea();

};

void coutarea();

#endif