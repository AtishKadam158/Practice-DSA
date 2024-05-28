#include<bits/stdc++.h>
using namespace std;
void selection(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int j=i+1,ind=j;
        int small=arr[j];
        for(j=i+1;j<n;j++){
            if(arr[j]<small) ind=j,small=arr[j];
        }
        if(arr[ind]<arr[i])
            swap(arr[ind],arr[i]);
    }
}
int main(){
    vector<int>arr={6,7,4,2,1,9};
    int n=arr.size();
    cout<<"Our Original Array is - \n";
    for(auto itr:arr)cout<<itr<<" ";
    cout<<"\nNow Sorted Array is - \n";
    selection(arr);
    for(auto itr:arr)cout<<itr<<" ";

}