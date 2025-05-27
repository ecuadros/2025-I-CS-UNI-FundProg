#ifndef __COMPLEX_H__
#define __COMPLEX_H__
#include <cmath>
#include <iostream>
using namespace std;
using RealType = double;
using ImagType = double;

class Complex
{
private:
    // Real part
     RealType m_r = 0;
    // Real part
     ImagType m_i = 0;
public:
    // Constructores
    Complex() = default; // Default constructor
    Complex(RealType r, ImagType i) : m_r(r), m_i(i) {} // Parameterized constructor
    
    // Destructor

    ~Complex() = default; // Default destructor
    
    // Operadores
    
    Complex& operator+=(const Complex& other){
        m_r += other.getReal();
        m_i += other.getImag();
        return *this;
    }
    Complex& operator-=(const Complex& other){
        m_r -= other.getReal();
        m_i -= other.getImag();
        return *this;
    }
    Complex& operator*=(const Complex& other) {
        m_r = m_r*other.getReal() - m_i*other.getImag();
        m_i = m_r*other.getImag() + m_i*other.getReal();
        return *this;
    }
    Complex& operator/=(const Complex& other) {
        m_r = (m_r*other.getReal() + m_i*other.getImag()) / (other.getReal()*other.getReal() + other.getImag()*other.getImag());
        m_i = (m_i*other.getReal() - m_r*other.getImag()) / (other.getReal()*other.getReal() + other.getImag()*other.getImag());
        return *this;
    }
    Complex operator+(const Complex& other) const {
        return Complex(m_r + other.getReal(), m_i + other.getImag());
    }
    Complex operator-(const Complex& other) const {
        return Complex(m_r - other.getReal(), m_i - other.getImag());
    }
    Complex operator*(const Complex& other) const {
        return Complex(m_r * other.getReal() - m_i * other.getImag(),  //ahorramos variables xd
                       m_r * other.getImag() + m_i * other.getReal());
    }
    Complex operator/(const Complex& other) const {
        RealType denominator = other.getReal() * other.getReal() + other.getImag() * other.getImag();
        
        return Complex((m_r * other.getReal() + m_i * other.getImag()) / denominator,
                       (m_i * other.getReal() - m_r * other.getImag()) / denominator);
    }


    Complex& operator =(const Complex& other) = default ;


    //Conversion.
    //   operator RealType() const { return m_r; }  
    //   operator ImagType() const { return m_i; } 

    // Getters
    RealType getReal() const { return m_r; }
    ImagType getImag() const { return m_i; }

    //op out.
    friend ostream& operator<<(ostream& os, const Complex& c) {
         return os << c.getReal() << " + " << c.getImag() << "i";
        
    }
    //op in.
    friend istream& operator>>(istream& is, Complex& c) {
        cout << "Enter real part: ";
        is >> c.m_r;
        cout << "Enter imaginary part: ";
        is >> c.m_i;
        return is;
    }
};
#endif // __COMPLEX_H__