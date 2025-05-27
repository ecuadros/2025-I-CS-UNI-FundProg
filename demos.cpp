#include <iostream>
#include "arit.h"
#include "demos.h"

using namespace std;

void DemoFunciones(){
    cout << suma(54, 35) << endl;
    int x = 65, y = 18;
    int rpta = suma(x, y);
    cout << "La respuesta es: " << rpta << endl;
    cout << "La resta es: " << resta(x, y) << endl;
}

// passing parameter by value
void f1(int n){ 
    n++;
}

// &n means n is received by reference
void f2(int &n)  { n++;   }
void f3(int * px){ ++*px;  px = nullptr; }
void f4(int *&px){ ++*px;  px = nullptr; }

void DemoParametros(){
    cout << "DemoParametros ..." << endl;
    int x = 10; //, y = 20;
    // f1 receives its 1st parameter by value
    cout << "void f1(int n)" << endl;
    f1(x); 
    f1(8);
    f1(x+3);
    cout << "x: " << x << endl;

    // f2 receives its 1st parameter by reference
    cout << "void f2(int &n)" << endl;
    f2(x);
    // f2(x+5);
    // f2(15);
    cout << "x: " << x << endl;
    int &r = x; // r is just an alias for x
    f2(r);
    cout << "r: " << r << endl;
    cout << "x: " << x << endl;

    // f3: its 1st parameter is a memory address passed by VALUE
    cout << "void f3(int *px)" << endl;
    int *p = nullptr, **q = nullptr;
    x = 10;
    p = &x;
    q = &p;
    f3(&x); cout << "x: " << x << endl;
    f3(&r); cout << "x: " << x << endl;
    f3( p); cout << "x: " << x << endl;
    f3(*q); cout << "x: " << x << endl;
    cout << "x: " << x << ", x está en: " << &x << endl;
    cout << "r: " << r << ", r está en: " << &r << endl;
    cout << "p: " << p << ", p está en: " << &p << endl;
    cout << "q: " << q << ", q está en: " << &q << endl;

    // f4: its 1st parameter is a pointer passed by reference
    x = 10;
    cout << "void f4(int *&px)" << endl;
    f4(p);
    cout << "x: " << x << endl;
    cout << "p: " << p << ", p está en: " << &p << endl;
    p = &x;
    f4(*q); // f4(p);
    cout << "x: " << x << endl;
    cout << "p: " << p << ", p está en: " << &p << endl;
}