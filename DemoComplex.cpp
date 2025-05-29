#include <iostream>
#include "DemoComplex.h"
#include "complex.h"
using namespace std;

void DemoComplex(){
    cout << "DemoComplex ..." << endl;
    

    Complex c1(1,-2),
            c2(4,3),
            c3(2, 5),  
            c4(-3, 7), 
            c5(-2, -4), 
            c6(1, 1);
                
    
    //c1+=c2; // c1 = c1 + c2;
    //cout<<c1;  
    //cout<<c3;
    //c3=c2+c1;   
    //cout<<c3;   
        
    cin>>c1; 
    cout<<"El numero complejo es: "<<c1;
    
    
          

    // // +, -, *, /, +=, =-, *=, /=, <<, >>, =, operator RealType, operator ImagType
    // c1 = c3 * c4;
    // c1 += c5; 
    //c1 += Complex(5,0);  
    //cout<<c1;
    //hola
    // c1 -= c6;  
    //c1 = c2 / c6 + c3 - c4 * c5;
    //cout << "Mi Complejo: " << c1 << " ..." << endl; 

    // RealType r = (RealType)c1;  // c1.getReal();
    // ImagType i = (ImagType)c1;  // c1.getImag();
}