#include "clase.h"
#include<iostream>

using namespace std;

void figura::setaltura(int h){
    if(h>0){
        altura=h;
    }
}

void figura::setbase(int b){
    if(b>0){
        base=b;
    }
}

int figura::getarea(){
    return base*altura;
}

void coutarea(){
    figura figura1;
    figura1.setaltura(5);
    figura1.setbase(4);
    cout<<"El area es : "<<figura1.getarea()<<endl;
}