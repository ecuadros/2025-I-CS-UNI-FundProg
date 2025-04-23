#include "util.h"

void intercambiar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}


void intercambiar(char* a, char* b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}  
// intercambiamos direcciones
