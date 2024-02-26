#include <iostream>
#include <cstring>
using namespace std;
class Complex
{
private:
    double real;
    double imag;

public:
    Complex() : real(0), imag(0) {}

    Complex(double r, double i) : real(r), imag(i) {}

    Complex(const Complex &other) : real(other.real), imag(other.imag) {}

    void ouput()
    {
        cout << "Phan thuc: " << real << ", Phan ao: " << imag << endl;
     }
};
 
 
main(){
Complex c1; 
    c1.ouput();

Complex c2(3.5, 2.0); 
    c2.ouput();

Complex c3 = c2; 
    c3.ouput();
}