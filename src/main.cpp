#include <iostream>
#include <iomanip>
#include <cmath>
#include <Complex.hpp>

int main(){
    std::cout << std::fixed << std::setprecision(3);
    Complex a, b;
    a.read(std::cin);
    b.read(std::cin);

    std::cout << "Addition: ";
    a.add(b).write(std::cout);

    std::cout << "Subtraction: ";
    a.sub(b).write(std::cout);

    std::cout << "Multiplication: ";
    a.mul(b).write(std::cout);

    std::cout << "Division: ";
    a.div(b).write(std::cout);

    std::cout << "Comparsion a == b: " << a.equ(b) << std::endl;

    std::cout << "Conjugate numbers: \n";
    a.conj().write(std::cout);
    b.conj().write(std::cout);

    std::cout << "Module comparsion: " << a.cmp(b) << std::endl;

    return 0;
} 
