
#include <cstring>
#include <iostream>
#include "mystring.h"
#include "util.h"
using namespace std;

void invertir(char* word){
    char* inicio = word;
    char* final  = word+strlen(word) - 1;

    while (inicio < final)
        intercambiar(inicio++, final--);
}

void DemoStrings(){
    cout << "Ingrese la cadena a invertir: ";
    char text[100];
    cin.getline(text, 100); // para leer frases
    invertir(text);
    cout << "Texto invertido: " << text;
}