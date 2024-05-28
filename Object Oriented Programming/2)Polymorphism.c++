#include <bits/stdc++.h>
using namespace  std;
class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r=0.0,double i=0.0) : real(r), imaginary(i) {}

    Complex operator+(const Complex& obj){
        Complex res;
        res.real=real+obj.real;
        res.imaginary=imaginary+obj.imaginary;
        return res;
    }

    void print(){
        cout<<real<<"+i"<<imaginary<<"\n";
    }
};

int main() {
    Complex c1(2.0, 3.0);
    Complex c2(1.5, 2.5);

    Complex sum = c1 + c2;
    sum.print();

    return 0;
}
