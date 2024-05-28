#include<bits/stdc++.h>
using namespace std;
int power(int num,int p){
    if(p==0)
        return 1;
    int res=1;
    for(int i=0;i<p;i++){
        res*=num;
    }
    return res;
}
int power_dc(int num,int p){
    if (p == 0)
        return 1;
    if (p == 1)
        return num;

    int temp = power_dc(num, p / 2);
    if (p % 2 == 0)
        return temp * temp;
    else
        return temp * temp * num;
}
int main(){
    int num;
    cout<<"Enter the number of Which we have to find Power - \n";
    cin>>num;
    int p;
    cout<<"\nEnter the Power - \n";
    cin>>p;
    cout<<"\nAnswer is using simple approach - \n"<<power(num,p);
    cout<<"\nAnswer is using divide and Conquer approach - \n"<<power_dc(num,p);
}
