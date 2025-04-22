#include <iostream> // cout
#include "demos.h"   // para usar la funcion suma, resta
#include "array.h"
#include "struct.h"
#include "recursion.h"
#include "persona.h"    
#include "sorting.h"
using namespace std; // Para evitar el std::

// Para compilar con C++:
// clang++ -o main main.cpp arit.cpp demos.cpp array.cpp
//
// Para compilar con C++17:
// g++ -pthread -std=c++17 -o main main.cpp arit.cpp demos.cpp array.cpp struct.cpp recursion.cpp
// para correr ejecutar: ./main

int main(){
    cout << "Fundamentos de Programación 2025-I" << endl;
    // DemoFunciones();
    // DemoParametros();
    // DemoArrays();
    // DemoStructs();
    // DemoRecursividad();
    //DemoSorting();
    Persona persona1("Fabricio",19); // Entregamos los datos al constructor y crea el objeto persona.
    persona1.saludar();
    //Pasan unos años y queremos hacer un get and setter del objeto.
    persona1.setEdad(25);
    cout <<"Nueva edad :" << persona1.getEdad()<< endl;
    return 0;
}


