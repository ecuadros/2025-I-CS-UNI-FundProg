#include <iostream>
#include "recursion.h"
using namespace std;
// unsigned char c1
//    0    1    1    1    0    1    1    0
//   2^7  2^6  2^5  2^4  2^3  2^2  2^1  2^0

// char c2;
//    0    1    1    1    0    1    1    0
//  -2^7  2^6  2^5  2^4  2^3  2^2  2^1  2^0
//    7    5     3
//   10^2 10^1 10^0
  
using T = long;
// FactIter demora n-1 pasos para calcular la respuesta
// O(n)
T FactIter(size_t n){
    if( n <= 1 )
        return 1;
    T rpta = 1;
    for(size_t i = 2 ; i <= n ; ++i)
        rpta *= i;
    return rpta;
}

// FactRec(n) = n * FactRec(n-1)
//                  n-1 * FactRec(n-2)
//                        n-2 * FactRec(n-3)
// FactRec(n) llama n-1 veces de forma recursiva
// O(n) = n
long FactRec(int n){
    if( n <= 0 )
        return 1;
    return n * FactRec(n-1);
}

// TODO: Implementar  y enviar por PR
// 0 1 1 2 3 5 8 13 21 34
// FibIter(n) requiere n-1 vueltas al bucle
// O(n) = n
long FibIter(int n){
    if( n <= 1 )
        return n;
    long a = 0, b = 1, rpta;
    for(size_t i = 2 ; i <= n ; ++i){
        rpta = a + b;
        a = b;
        b = rpta;
    }
    return rpta;
}

// TODO: Implementar  y enviar por PR
// FibRec(n) crece de forma exponencial
// O(n) = 2^n
long FibRec (int n){
    if( n <= 1 )
        return n;
    return FibRec(n-1) + FibRec(n-2);
}

void DemoRecursividad(){
    cout << "Factoriales ..." <<endl;
    for( int i = 0; i < 25 ; ++i ){
        cout << "FactIter(" << i << ")=" << FactIter(i) << endl;
        cout << "FactRec (" << i << ")=" << FactRec (i) << endl;
    }
    cout << "Fibonacci ..." <<endl;
    for( int i = 0; i <= 60 ; ++i ){
        cout << "FibIter(" << i << ")=";
        cout << FibIter(i) << "\t";
        cout << "FibRec (" << i << ")="; cout.flush();
        cout << FibRec (i) << endl;
    }
    // cout << "Tamaño de un long es:" << sizeof(long) <<endl;
}