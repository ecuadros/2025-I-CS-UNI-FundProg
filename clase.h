#ifndef __CLASE_H__
#define __CLASE_H__

#include<cstring>

using namespace std;

class figura{
    private:
    int altura;
    int base;

    public:
    void setaltura(int);
    void setbase(int);
    int getarea();

};

void coutarea();

#endif