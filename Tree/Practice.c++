#include<bits/stdc++.h>
using namespace std;
class Complex{
    private:
        int real,imag;
    public:
        Complex(int r=0,int i=0){
            real=r;
            imag=i;
        }
        Complex operator+(const Complex &obj){
            Complex res;
            res.real=real+obj.real;
            res.imag=imag+obj.imag;
            return res;
        }
        void print()  {cout<<real<<" + "<<imag<<"i"<<endl;}
};
int main(){
    Complex c1(10,5);
    Complex c2(5,4);
    Complex C3=c1c2;
    C3.print();

}