#include "complex.hpp"
#include <iostream>
#include <cmath>

    ComplexNumber::ComplexNumber(double real, double imag) : real(real), imag(imag) 
    {
        
    }

    ComplexNumber ComplexNumber::operator+(const ComplexNumber& other) const 
    {

    return ComplexNumber(real + other.real, imag + other.imag);
    
    }

    ComplexNumber ComplexNumber::operator-(const ComplexNumber& other) const 
    {

    return ComplexNumber(real - other.real, imag - other.imag);
    
    }

    ComplexNumber ComplexNumber::operator*(double scalar) const 
    {

    return ComplexNumber(real * scalar, imag * scalar);
    
    }

    double ComplexNumber::abs() const 
    {
    
    return std::sqrt(real * real + imag * imag);
    
    }

    void ComplexNumber::print() const
    
    {
    
    std::cout << "(" << real << ", " << imag << "i)" << std::endl;
    
    }
