#include <iostream>
using namespace std;

class Complex {
private:
    double real; 
    double imag;  

public:
    
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    void display() {
        if (imag < 0)
            cout << real << " - " << -imag << "i" << endl;
        else
            cout << real << " + " << imag << "i" << endl;
    }

    friend Complex add(const Complex& a, const Complex& b);
    friend Complex subtract(const Complex& a, const Complex& b);
    friend Complex multiply(const Complex& a, const Complex& b);
    friend Complex divide(const Complex& a, const Complex& b);
};

Complex add(const Complex& a, const Complex& b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

Complex subtract(const Complex& a, const Complex& b) {
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

Complex multiply(const Complex& a, const Complex& b) {
    Complex result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + b.real * a.imag;
    return result;
}

Complex divide(const Complex& a, const Complex& b) {
    Complex result;
    double denominator = b.real * b.real + b.imag * b.imag;  
    if (denominator == 0) {
        cout << "Division by zero is not allowed." << endl;
        return result;  

    result.real = (a.real * b.real + a.imag * b.imag) / denominator;
    result.imag = (a.imag * b.real - a.real * b.imag) / denominator;
    return result;
}}

int main() {
    Complex c1(3, 2), c2(1, 7); 

    cout << "c1 = ";
    c1.display();
    cout << "c2 = ";
    c2.display();

    Complex c3 = add(c1, c2);
    cout << "c1 + c2 = ";
    c3.display();

    Complex c4 = subtract(c1, c2);
    cout << "c1 - c2 = ";
    c4.display();

    Complex c5 = multiply(c1, c2);
    cout << "c1 * c2 = ";
    c5.display();

    Complex c6 = divide(c1, c2);
    cout << "c1 / c2 = ";
    c6.display();

    return 0;
}
