//Problem of Finding of Max or Min using Tournamental method
#include<bits/stdc++.h>
using namespace std;
int max_tradi(vector<int>arr){
    int maxi=INT_MIN;
    for(auto itr : arr){
        maxi=max(maxi,itr);
    }
    return maxi;
}
int min_tradi(vector<int>arr){
    int mini=INT_MAX;
    for(auto itr :arr){
        mini=min(mini,itr);
    }
    return mini;
}
pair<int,int> min_max_tourna(vector<int>arr){
    int n=arr.size();
    vector<int>maxi,mini;
    for(int i=1;i<n;i+=2){
        maxi.push_back(max(arr[i],arr[i-1]));
        mini.push_back(min(arr[i],arr[i-1]));
    }
    int m=mini.size();
    int p1,p2;
    p1=max_tradi(maxi);
    p2=min_tradi(mini);
    p1=max(arr[n-1],p1);
    p2=min(arr[n-1],p2);
    return {p1,p2};
}
int max_dandc(vector<int>arr){
    
}
int min_dandc(vector<int>arr){

}
int main(){
    vector<int>arr={6,7,2,8,4,1,0,-4,9};
    cout<<"Max element present in Array using simple- \n"<<max_tradi(arr);
    cout<<"\nMin element present in Array using simple- \n"<<min_tradi(arr);
    cout<<"Max element present in Array using tournamental approach- \n"<<min_max_tourna(arr).first;
    cout<<"\nMin element present in Array using tournamental approach- \n"<<min_max_tourna(arr).second;
    cout<<"Max element present in Array using d and c- \n"<<max_dandc(arr);
    cout<<"\nMin element present in Array using d and c- \n"<<min_dandc(arr);
}
