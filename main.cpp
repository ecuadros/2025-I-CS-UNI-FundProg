#include <iostream> // cout
#include "demos.h"   // para usar la funcion suma, resta
#include "array.h"
#include "struct.h"
#include "recursion.h"
#include "string.h"
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
    char p[] = "hola";
    invertir(p);
    cout << p << endl;
    // DemoFunciones();
    // DemoParametros();
    // DemoArrays();
    // DemoStructs();
    // DemoRecursividad();
    //DemoSorting();
    return 0;
}


