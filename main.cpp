#include <iostream> // cout
#include "demos.h"   // para usar la funcion suma, resta
#include "array.h"
#include "struct.h"
#include "recursion.h"
#include "sorting.h"
#include "mystring.h"
#include "classes.h"
#include "Pointers.h"
#include "DemoComplex.h"
#include "inheritance.h"
#include "DemoTemplates.h"
#include "DemoFiles.h"
#include "DemoLambda.h"
#include "SharedPtr.h"
#include "foldtraverse.hpp"

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
    // DemoComplex();
    // DemoInheritance();
    // DemoTemplates1();
    // DemoTemplates2();
    DemoVariadicTemplates();
    // DemoFiles();
    // DemoPointers();
    // DemoPointertoClassMembers();
    // DemoComplexReturnValues();
    // DemoLambdaFunctions();
    // DemoSharedPtr();
    DemoFoldTraverse();

    int m[5][3] = {{0}};
    int x = 10;
    m[0][0] = 7;
    m[0][1] = 7;
    m[0][2] = 7;
    m[0][x] = 7;
    for(int row = 0 ; row < 5 ; row++){
        for(int col = 0 ; col < 3 ; col++)
            cout << "m[" << row << "][" << col << "]=" << m[row][col] << " ";
        cout << endl;
    }

    for(x = 0 ; x < 15 ; x++){
        cout << "m[0][" << x << "]=" << m[0][x] << " ";
    }
    return 0;
}


