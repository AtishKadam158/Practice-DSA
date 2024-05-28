#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<char,int>mp;
    mp['z']=1;
    mp['b']=2;
    mp['c']=0;
    for(auto itr :mp){
        cout<<itr.first<<" "<<itr.second<<endl; 
    }
}