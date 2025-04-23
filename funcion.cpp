#include<iostream>
#include<string.h>
#include "funcion.h"

using namespace std;

void inter(char &x,char &y){
    char aux=x;
    x=y;
    y=aux;

}

void inver_array(char *p){
    size_t l = strlen(p) - 1;
    
    for(size_t i=0 ; i<l ; ++i, --l){
        inter(p[i],p[l]);
    }
    
}

void ingreso(){
    char p[20];
    cout<<"Ingrese una palabra : ";
    cin>>p;
    char *p1= new char [strlen(p)];
    strcpy(p1,p);

    inver_array(p1);
    
    cout<<"la palabra invertida es : "<<p1<<endl;

}