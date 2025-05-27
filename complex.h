#ifndef __COMPLEX_H__
#define __COMPLEX_H__

using RealType = double;
using ImagType = double;

class Complex
{
private:
   
   RealType m_r = 0;
   ImagType m_i = 0;

public:
    // Constructor
    Complex() = default;                         
    Complex(RealType r, ImagType i) : m_r(r), m_i(i) {} 
    Complex(const Complex& other) = default; 
    
    // Destructor
    ~Complex() = default; //uso el destructor por defecto
    
    // Operadores
    Complex& operator=(const Complex& other) = default;

    // Operador suma
    Complex operator+(const Complex& other) const {
        return Complex(m_r + other.m_r, m_i + other.m_i);
    }

    // Operador resta
    Complex operator-(const Complex& other) const {
        return Complex(m_r - other.m_r, m_i - other.m_i);
    }

    // Operador multiplicación
    Complex operator*(const Complex& other) const {
        return Complex(
            m_r * other.m_r - m_i * other.m_i,
            m_r * other.m_i + m_i * other.m_r
        );
    }

    // Operador igualdad
    bool operator==(const Complex& other) const {
        return (m_r == other.m_r) && (m_i == other.m_i);
    }

    bool operator!=(const Complex& other) const {
        return !(*this == other);
    }

    RealType real() const { return m_r; }
    ImagType imag() const { return m_i; }

};

#endif // __COMPLEX_H__