#include "util.h"

int Suma    (int a, int b){ return a+b; }
int Resta   (int a, int b){ return a-b; }
int Mult    (int a, int b){ return a*b; }
int Division(int a, int b){ return a/b; }

int ChangeBit(int a,size_t n){
    int z;
    z=1<<n;
    if(a&z){
        a ^= z;
    }else a |= z;
    return a;
}