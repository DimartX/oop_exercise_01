#include <Complex.hpp>

void Complex::read(std::istream& in){
    in >> a >> b;
}

void Complex::write(std::ostream& out) const{
    out << a << ' ' << b << std::endl;
}
