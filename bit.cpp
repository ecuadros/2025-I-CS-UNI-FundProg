#include <iostream>
#include "bit.h"
using namespace std;

void cambiobits(int &a,int &b,int n){
int bit_a = (a >> n) & 1;
int bit_b = (b >> n) & 1;

if(bit_a == 0 && bit_b == 1){
  a |= (1 << n);
  b &= ~(1 << n);
}

if(bit_a == 1 && bit_b == 0){
  b |= (1 << n);
  a &= (1 << n);
}

}

void Democambio(){
    int a, b, n;
    cout << "Escribe el primer numero: ";
    cin >> a;
    cout << "Escribe el segundo numero: "; 
    cin >> b;
    cout << "Introduce la posicion a cambiar: ";
    cin >> n;

    cout << "Valores originales: " << a << " - " << b << endl; 

    cambiobits(a, b, n);

    cout << "Valores luego del cambio: " << a << " - " << b;
}