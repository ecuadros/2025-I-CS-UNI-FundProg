
#include <iostream>
#include "invertir_palabra.h"
using namespace std;

int main() {
    char palabra[] = "Hola";  
    cout << "Palabra original: " << palabra << endl;

    invertirPalabra(palabra);

    cout << "Palabra invertida: " << palabra << endl;

    return 0;
}