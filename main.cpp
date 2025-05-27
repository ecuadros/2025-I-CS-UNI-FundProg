#include <iostream> // cout
#include "demos.h"   // para usar la funcion suma, resta
#include "array.h"
#include "struct.h"
#include "recursion.h"
#include "sorting.h"
#include "mystring.h"
#include "classes.h"
#include "FuncPointers.h"
#include "DemoComplex.h"
using namespace std; // Para evitar el std::

// Para compilar con C++:
// clang++ -o main main.cpp arit.cpp demos.cpp array.cpp
//
// Para compilar con C++17:
// g++ -pthread -std=c++17 -o main main.cpp arit.cpp demos.cpp array.cpp struct.cpp recursion.cpp mystring.cpp classes.cpp persona.cpp util.cpp
// para correr ejecutar: ./main

int main(){
    cout << "Fundamentos de Programación 2025-I" << endl;
    // DemoFunciones();
    // DemoParametros();
    // DemoArrays();
    // DemoStructs();
    // DemoRecursividad();
    // DemoSorting();
    // DemoStrings();
    // DemoClasses();
    // DemoFunctionPointers();
    DemoComplex();
    return 0;
}


