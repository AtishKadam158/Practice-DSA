#include<bits/stdc++.h>
using namespace std;

void reverse(int &num){
    int result=0;
    while(num>0){
        int temp=num%10;
        result=result*10+temp;
        num/=10;
    }
    num=result;
}

int main(){
    int num=12345;
    cout<<"the Number original = "<<num<<"\n";
    reverse(num);
    cout<<"the Number reversed = "<<num<<"\n";

}