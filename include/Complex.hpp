#pragma once

#include <cmath>
#include <iostream>

class Complex{
private:
    double a, b;

public:
    Complex() {};

    Complex(double a, double b):
        a(a), b(b) {};
    
    Complex(Complex const& other){
        this->a = other.a;
        this->b = other.b;
    }
    
    ~Complex (){};

    Complex add(Complex const& other) const {
        return Complex(this->a + other.a, this->b + other.b);
    }
    
    Complex sub(Complex const& other) const {
        return Complex(this->a - other.a, this->b - other.b);
    }
    
    Complex mul(Complex const& other) const {
        return Complex(this->a * other.a - this->b * other.b,
                       this->a * other.b + this->b * other.a);
    }
    
    Complex div(Complex const& other) const {
        double den = (other.a * other.a + other.b * other.b);            
        return Complex(
                       (this->a * other.a + this->b * other.b) / den,
                       (this->b * other.a - this->a * other.b) / den
                       );
    }

    Complex conj() const {
        return Complex(this->a, -this->b);
    }

    double mdl() const {
        return sqrt(this->a * this->a + this->b * this->b);
    }
    
    bool equ(Complex const& other) const {
        return (this->a == other.a) && (this->b == other.b);
    }

    int cmp(Complex const& other) const{
        return (this->mdl() > other.mdl()) ? 1
            : (this->mdl() == other.mdl()) ? 0
            : -1;
    }

    void read(std::istream& in);
    void write(std::ostream& out) const;    
};
