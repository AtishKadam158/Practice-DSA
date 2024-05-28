#include<bits/stdc++.h>
using namespace std;

vector<int> printdivisor(int num){
    vector<int>res;
    for(int i=1;i<=sqrt(num);i++){
        if (num%i==0){
            if(num/i == i){
                res.push_back(i);
            }
            else {
                res.push_back(num/i);
                res.push_back(i);
            }
        }
    }
    return res;
}

int main(){
    int num=100;
    vector<int>res=printdivisor(num);
    for(auto itr:res){
        cout<<itr<<" ";
    }
}