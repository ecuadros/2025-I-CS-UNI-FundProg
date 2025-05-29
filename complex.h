#ifndef __COMPLEX_H__
#define __COMPLEX_H__
using namespace std;
using RealType = double;
using ImagType = double;

// Complex
class Complex
{ 
private:   
    RealType m_r;
    // Imag part
    ImagType m_i ;
public:
    // Constructores
    
    Complex(RealType p, ImagType q): m_r(p),m_i(q){}
    // Destructor 
    ~Complex(){};   

    // Operadores
    Complex& operator +=( const Complex& other )  {
        m_r += other.getReal(); 
        m_i += other.getImag();
        return *this;
    }; 

    Complex& operator -=( const Complex& other ) {
        m_r -= other.getReal();
        m_i -= other.getImag();
        return *this;
    } 
    
    Complex& operator *=( const Complex& other ){
        RealType m_r = m_r * other.getReal() - m_i * other.getImag();
        ImagType m_i = m_r * other.getImag() + m_i * other.getReal();
        
        return *this;
    }

    Complex& operator /=( const Complex& other){
        RealType m_r = (m_r * other.getReal() + m_i * other.getImag())/(getReal()*getReal() + getImag()*getImag());
        ImagType m_i = (m_i * other.getReal() - m_r * other.getImag())/(getReal()*getReal() + getImag()*getImag());
    }

    Complex operator +( const Complex& other ) const{ 
        RealType r = m_r + other.getReal();
        ImagType i = m_i + other.getImag();  

          
        return Complex(r,i);
    };
    Complex operator -( const Complex& other ) const{
        RealType r = m_r - other.getReal();
        ImagType i = m_i - other.getImag();      

       
        return Complex(r,i);
    };  
    Complex operator *( const Complex& other ) const{
        RealType r = m_r * other.getReal() - m_i * other.getImag();
        ImagType i = m_r * other.getImag() + m_i * other.getReal();     

       
        return Complex(r,i); 
    };
    Complex operator /( const Complex& other ) const{
        RealType r = (m_r * other.getReal() + m_i * other.getImag())/(getReal()*getReal() + getImag()*getImag());
        ImagType i = (m_i * other.getReal() - m_r * other.getImag())/(getReal()*getReal() + getImag()*getImag()); 
        
        
        return Complex(r,i);
    };

    RealType getReal() const {return m_r;}
    ImagType getImag() const {return m_i;} 
     

   friend ostream& operator<<(ostream& os, Complex& c) {
    if(c.getImag()>0){
      return os << c.getReal() << " + " << c.getImag() << "i";
    }
      return os << c.getReal() << " " << c.getImag() << "i";
    };

    friend istream &operator>>(istream& is, Complex & z){
    cout << "Ingrese la parte real: ";
    is >> z.m_r;
    cout << "Ingrese la parte imaginaria: ";
    is >> z.m_i;
    return is;
} 

     
};


 
  





  
#endif // __COMPLEX_H__   