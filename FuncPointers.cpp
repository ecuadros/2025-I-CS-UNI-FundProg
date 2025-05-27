#include <iostream>
#include "FuncPointers.h"
#include "util.h"

using namespace std;


void DemoSwitch(){
    int a, b, rpta, opt;
    cout << "ingrese a y b";
    cin >> a >> b;
    cout << "ingrese operacion:\n0: Suma\n1: Resta\n2: Mult\n3: Div:";
    cin >> opt;
    switch(opt)
    {
        case 0: rpta = Suma(a, b);
                break;
        case 1: rpta = Resta(a, b);
                break;
        case 2: rpta = Mult(a, b);
                break;
        case 3: rpta = Division(a, b);
                break;
        default:
                rpta = 0;
    }
    cout << "Rpta: " << rpta;
}

void DemoArrayFunctPointers(){
    int a, b, rpta, opt;
    cout << "ingrese a y b";
    cin >> a >> b;
    cout << "ingrese operacion:\n0: Suma\n1: Resta\n2: Mult\n3: Div:";
    cin >> opt;
    int (*apf[4])(int, int) = {&Suma, &Resta, &Mult, &Division};
    rpta = (*apf[opt])(a, b);
    cout << "Rpta sin Switch: " << rpta;
}

void DemoFunctionPointers(){

    DemoSwitch();

    DemoArrayFunctPointers();
}
