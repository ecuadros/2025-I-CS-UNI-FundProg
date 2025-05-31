#ifndef __COMPLEX_H__
#define __COMPLEX_H__

#include<iostream>
using namespace std;

using RealPart = double;
using ImagPart = double;

class Complex
{
    private:
    //atributos:
    //parte real
    RealPart m_r = 0;
    //parte imaginaria
    ImagPart m_i = 0;


    public:
    //constructores
    inline Complex(RealPart a, ImagPart b){//par ordenado(a,b) representa a un complejo
        m_r = a;
        m_i = b;
    }
    //por defecto
    inline Complex(){
        m_r = 0;
        m_i = 0;
    }

    //destructores
    ~Complex();

    //sobrecarga de operadores
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

    Complex& operator*=(const Complex& other){
        m_r = other.getReal() * m_r  -  other.getImag() * m_i ;
        m_i = other.getImag() * m_r  +  other.getImag() * m_r ;
        return *this;
    }

    Complex& operator/=(const Complex& other){
        m_r = ( m_r * other.getReal() + m_i * other.getImag() ) / ( other.getReal() * other.getReal() + other.getImag() * other.getImag() );
        m_i = ( m_i * other.getImag() + m_r * other.getReal() )/ ( other.getReal() * other.getReal() + other.getImag() * other.getImag() );
        return *this;
    }

    //de aca en adelante ya no lleva el & despues del complex por que al sumar a+b 
    //este no almacena el valor en a lo mismo para - * / 
    inline Complex operator+(const Complex& other){
        return Complex( m_r + other.getReal() , m_i + other.getImag() );
    }

    inline Complex operator-(const Complex& other){
        return Complex( m_r - other.getReal() , m_i - other.getImag() );
    }

    Complex operator*(const Complex& other){
        RealPart a=0;
        ImagPart b=0;
        a = m_r * other.getReal() - m_i * other.getImag();
        b = m_r * other.getImag() + m_i * other.getReal();
        return Complex( a , b );
    }

    Complex operator/(const Complex& other){
        RealPart a=0;
        ImagPart b=0;
        a = ( m_r * other.getReal() + m_i * other.getImag() ) / ( other.getReal() * other.getReal() + other.getImag() * other.getImag() );
        b = ( m_i * other.getImag() + m_r * other.getReal() )/ ( other.getReal() * other.getReal() + other.getImag() * other.getImag() );
        return Complex( a , b );
    }

    inline operator RealPart() const{
        return (*this).getReal();
    }

    //sale error al intentar incluirlo una opcion seria que ImagPart y Realpart tuvieran
    //se les asignaran distintos tipos de variable
    /*inline operator ImagPart() const{
        return (*this).getImag();
    }*/

    //getters
    RealPart getReal() const { return m_r ;} // const para que no se modifique el m_r
    ImagPart getImag() const { return m_i ;}

    //acceso para el cin
    friend istream &operator>>(istream& is, Complex& other);

};

//cout
ostream &operator<<(ostream& os , Complex other){
    char aux;
    if (other.getImag() >= 0) aux='+';
    else aux='-';
    return os << other.getReal() << " " << aux << " " <<abs(other.getImag())<<"i"<<endl;
    //otra forma
    /*
    if(other.getImag() > 0)
    return os << other.getReal() << " + " << other.getImag()<<"i"<<endl;
    if(other.getImag() == 0)
    eturn os << other.getReal() << endl;
    if(other.getImag() < 0)
    return os << other.getReal() << other.getImag()<<"i"<<endl;*/
}

//cin
istream &operator>>(istream& is , Complex& other){
    return is >> other.m_r >> other.m_i;
    //return is;
}

#endif // __COMPLEX_H__