
#include "invertir_palabra.h"
#include <cstring>  
using namespace std;

void invertirPalabra(char *palabra) {
    int longitud = strlen(palabra);  
    char *inicio = palabra;              
    char *fin = palabra + longitud - 1;  
    
    while (inicio < fin) {
        swap(*inicio, *fin);  
        inicio++;
        fin--;
    }
}
