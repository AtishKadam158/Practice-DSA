#include<bits/stdc++.h>
using namespace std;
//Traditional
bool isprime(int num){
    if(num<2)return false;
    for(int i=2;i*i<=num;i++){
        if(num%i==0) return false;
    }
    return true;
}
bool newisprime(int num){
    if(num<=1) return false;
    if(num<=3) return true;
    if(num%2==0 || num%3==0) return false;
    for(int i=5;i<=num;i+=6){
        if(num%i==0 || (num+2)%i==0)
            return false;
    }
    return true;
}

int main(){
    int n=123;
    if(isprime(n))
        cout<<"The Number is "<<n<<"Prime \n";
    else
        cout<<"The Number is "<<n<<" Not Prime \n";

    if(newisprime(n))
        cout<<"The Number is "<<n<<"Prime \n";
    else
        cout<<"The Number is "<<n<<" Not Prime \n";
}