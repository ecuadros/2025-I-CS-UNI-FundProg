#include <iostream> // cout
#include "arit.h"   // para usar la funcion suma
#include "string"
using namespace std; // Para evitar el std::
// clang++ -o main main.cpp arit.cpp
// para correr ejecutar: ./main

int main(){
    cout << "Hola mundo desde Fund Prog 2025-I" << endl;
    cout << suma(54, 35) << endl;
    int x = 65, y = 18;
    int rpta = suma(x, y);
    cout << "La respuesta es: " << rpta << endl;

    cout << "La resta es: " << resta(x, y) << endl;

    //Change the method of adition.
     cout << "Deseas sumar un numero positivo?"<< endl;
     string key = "";
     cin >>key ;
    if(key.compare("si")){
        int x = 9 , y = 10;
        cout << "La respuesta es: " << suma(x, y);
    }
    //el profe va aumentar 3 veces el syllabus osea vamos a tener que estudiar mas ps xd v:

    return 0;
    //Fabricio estuvo aqui. Probando a.

}
