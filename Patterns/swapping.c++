#include<bits/stdc++.h>
using namespace std;
void swap (int &a,int&b){
    a=a^b;
    b=a^b;
    a=a^b;
}
int main(){
    int a=10,b=34;
    //Without using extra space
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a = "<<a;
    cout<<"\nb = "<<b;

    int x=23,y=32;
    swap(x,y);
    cout<<"\nx = "<<x;
    cout<<"\ny = "<<y;
}