#include<bits/stdc++.h>
using namespace std;
int length(vector<int>arr){
    int n= arr.size();
    int len=INT_MIN;
    int temp=1;
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1])
            temp++;
        else temp=1;
        len=max(temp,len);
    }
    return len;
}
int main(){
    vector<int>arr={1,3,5,2,4,7,9};
    cout<<length(arr);
}