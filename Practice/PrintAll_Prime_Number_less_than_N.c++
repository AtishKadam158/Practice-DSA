#include<bits/stdc++.h>
using namespace std;
bool isprime(int num){
    if(num<2)
        return 0;
    else{
        for(int i=2;i*i<=num;i++){
            if (num%i==0)
                return 0;
        }
    }
    return true;
}
vector<int>primeinN(int N){
    vector<int>arr;
    for(int i=0;i<N;i++){
        if(isprime(i))
            arr.push_back(i);
    }
    return arr;
}
int main(){
    int N=345;
    vector<int>arr=primeinN(N);
    for(auto itr :arr)
    cout<<itr<<" ";
}