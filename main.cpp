#include <iostream>
#include <cmath>

class Complex{
public:
    double a, b;
    
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
                       (this->a * other.b - this->b * other.a) / den
                       );
    }

    Complex conj() const {
        return Complex(this->a, -this->b);
    }

    double mdl() const {
        return sqrt(this->a * this->a + this->b * this->b);
    }
    
    bool equ(Complex const& other) const {
        return this->a == other.a && this->b == other.b;
    }

    bool cmp(Complex const& other) const{
        if (this->mdl() > other.mdl()) {
            return 1;
        }
        else if (this->mdl() < other.mdl()) {
            return -11;
        }
        return 0;
    }
    
};

int main(){
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++){
        Complex a, b;
        double x1, y1;
        std::cin >> x1 >> y1;

        double x2, y2;
        std::cin >> x2 >> y2;
        a = Complex(x1, y1);
        b = Complex(x2, y2);
        
        std::cout << "Addition: " <<
            a.add(b).a << " " << a.add(b).b << '\n';
        std::cout << "Subtraction: " <<
            a.sub(b).a << " " << a.sub(b).b << '\n';
        std::cout << "Multiplication: " <<
            a.mul(b).a << " " << a.mul(b).b << '\n';
        std::cout << "Division: " <<
            a.div(b).a << " " << a.div(b).b << '\n';
        std::cout << "Comparsion a == b: " << a.equ(b) << '\n';
        std::cout << "Conjugate number: " <<
            " ~a = " << a.conj().a << ' ' << a.conj().b <<
            " ~b = " << b.conj().a << ' ' << b.conj().b << '\n';
        std::cout << "Module comparsion: " << a.cmp(b) << '\n';
    }
    
    return 0;
} 
