#include <iostream>
#include "array.h"

using namespace std;

int *pArray = nullptr, nElem = 0;

void CreateArray(){
    pArray = new int [nElem]; // Pido memoria para n elementos de tipo int
}

void ReadArray(){
    for(int i = 0 ; i < nElem ; ++i){
        cout << "Ingresar v[" << i << "]: ";
        cin  >> pArray[i];
    }
}

void PrintArray(){
    cout << "Los valores ingresados son:" << endl;
    for(int i = 0 ; i < nElem ; ++i){
        cout << "v[" << i << "]: " << pArray[i] << endl;
    }
}

void DestroyArray(){
    cout << "Liberando la memoria asignada" << endl;
    delete [] pArray;    // Liberar la memoria
}

// Version reprobada 100%
void DemoArrays(){
    cout << "Ingrese tamano del array:";
    cin >> nElem;

    // Crear el vector
    CreateArray();
    // Ingresar los valores
    ReadArray();
    // Imprimir los valores ingresados
    PrintArray();
    // Eliminar la memoria
    DestroyArray();
}