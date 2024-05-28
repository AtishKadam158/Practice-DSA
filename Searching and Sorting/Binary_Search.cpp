#include<bits/stdc++.h>
using namespace std;
int BinarySearch(vector<int>&arr,int low,int high,int target){
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target)return mid+1;
        else if(arr[mid]>target)high=mid-1;
        else low=mid+1;
    }
    return low+1;
}
int main(){
    vector<int>arr={1,24,99,102,103,245,890,1089};
    int n=arr.size();
    cout<<"Our Original Array is - \n";
    for(auto itr:arr)cout<<itr<<" ";
    int target=24;
    //cout<<"\nEnter the number to find its position - \n";
    //cin>>target;
    cout<<"\nPosition of target Element - \n"<<BinarySearch(arr,0,n-1,target);
    
}