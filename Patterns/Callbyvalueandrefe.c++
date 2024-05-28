#include<bits/stdc++.h>
using namespace std;
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<" ";
    cout<<b<<"\n";
    //Call by value
    //A copy of value is passed to the function
    //Actual and formal arguments will be created in different memory location
}
void swap2(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<" ";
    cout<<b<<"\n";
    //Call by reference
    //An address of value is passed to the function
    //Actual and formal arguments will be created in same memory location
}
int main(){
    int a=12,b=13;
    swap(a,b);
    cout<<a<<" ";
    cout<<b<<"\n";
    swap2(a,b);
    cout<<a<<" ";
    cout<<b<<"\n";
}