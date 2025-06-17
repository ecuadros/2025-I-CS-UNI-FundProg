#include "bits.h"
#include <iostream>
using namespace std;

bool stateBit(int numero, const int n_bit){
    return (numero & (1 << n_bit));
}

void turnOnBit(int& numero, const int n_bit){
    numero ^= (1 << n_bit);
}

void turnOffBit(int& numero, const int n_bit){
    numero &= ~(1 << n_bit);
}

void swapBits(int& n1, const int p1, int& n2, const int p2){
    if(stateBit(n1, p1) != stateBit(n2, p2)){
        if(stateBit(n1, p1)){
            turnOnBit(n2, p2);
            turnOffBit(n1, p1);
        }else{
            turnOnBit(n1, p1);
            turnOffBit(n2, p2);
        }
    }
}

void DemoBits(){
    auto n1 = 5; //  101 ->  100 (4)
    auto n2 = 8; // 1000 -> 1001 (9)

    auto p1 = 0;
    auto p2 = 0;
    
    cout << "Numero 1: " << n1 << endl;
    cout << "Numero 2: " << n2 << endl;

    cout << "Intercambio entre el bit N°" << p1 << " de " << n1;
    cout << " con el bit N°" << p2 << " de " << n2 << endl;
    swapBits(n1, p1, n2, p2);

    cout << "Numero 1: " << n1 << endl;
    cout << "Numero 2: " << n2 << endl;
}
