#ifndef COMPLEXNUMBER_HPP
#define COMPLEXNUMBER_HPP

    class ComplexNumber 
    {
    double real;
    
    double imag;
    
    public:
    
    ComplexNumber(double real = 0.0, double imag = 0.0);

    ComplexNumber operator+(const ComplexNumber& other) const;
    
    ComplexNumber operator-(const ComplexNumber& other) const;
    
    ComplexNumber operator*(double scalar) const;

    double abs() const;

    void print() const;
    
    };

#endif 
