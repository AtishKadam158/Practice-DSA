#include<bits/stdc++.h>
using namespace std;
int Mult(int a,int b){
    int sign=1,result=0;
    if(a<0) sign=-sign,a=-a;
    if(b<0) sign=-sign,b=-b;

    while(b>0){
        if(b & 1) result+=a;
        a<<=1; //Multiply by 2
        b>>=1; //Division by 2
    }
    return sign>0 ? result : -result;
}
int Add(int a,int b){
    while(b!=0){
        int carry=(a&b)<<1;
        a=a^b;
        b=carry;
    }
    return a;
}
int Sub(int a,int b){
    while(b!=0){
        int borrow=(~a)&b;
        a=a^b;
        b=borrow<<1;
    }
    return a;
}
int Div(int a,int b){
    if(b==0){
        cout<<"\nDivision by Zero is Not Allowed\n";
        return 0;
    }
    int quotient=0;
    int sign=(a<0)^(b<0)?-1:1;
    a=abs(a);
    b=abs(b);

    while(a>=b){
        a-=b;
        ++quotient;
    }
    return sign*quotient;
}
int main(){
    cout<<"Multiply Without Using * Operator\n";
    cout<<Mult(12,13)<<"\n";
    cout<<"Add Without Using + Operator\n";
    cout<<Add(14,3)<<"\n";
    cout<<"Subtract Without Using - Operator\n";
    cout<<Sub(25,12)<<"\n";
    cout<<"Divide Without Using / Operator\n";
    cout<<Div(45,13)<<"\n";
    return 0;
}