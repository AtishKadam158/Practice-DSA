#include<bits/stdc++.h>
using namespace std;

int reverse(int num){
    int result=0;
    while(num>0){
        int temp=num%10;
        result=result*10+temp;
        num/=10;
    }
    return result;
}

int main(){
    int num=12321;
    cout<<"the Number original = "<<num<<"\n";
    if(reverse(num)==num)
        cout<<"the Number is palindrome \n";
    else
        cout<<"The Number is Not palindrome ";

}