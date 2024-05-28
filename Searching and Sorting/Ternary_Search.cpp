//O(log3n)
#include<bits/stdc++.h>
using namespace std;
int TernarySearch(vector<int>&arr,int low,int high,int target){
    
    while (low<=high){
        int mid1=low+(high-low)/3,mid2=high-(high-low)/3;
        if((arr[mid1]==target)) return mid1+1;
        if((arr[mid2]==target)) return mid2+1;
        if(target>arr[mid1]&& target<arr[mid2]){
            low=mid1+1;
            high=mid2-1;
        }
        if(arr[mid1]>target){
            low=0,high=mid1-1;
        }
        if(arr[mid2]<target){
            low=mid2+1,high=arr.size()-1;
        }
    }
    return low+1;
}
int main(){
    vector<int>arr={7,12,19,24,31,48,51,63,67,73,81,92};
    int n=arr.size();
    cout<<"Our Original Array is - \n";
    for(auto itr:arr)cout<<itr<<" ";
    int target=7;
    //cout<<"\nEnter the number to find its position - \n";
    //cin>>target;
    cout<<"\nPosition of target Element - \n"<<TernarySearch(arr,0,n-1,7);
    cout<<"\nPosition of target Element - \n"<<TernarySearch(arr,0,n-1,12);
    cout<<"\nPosition of target Element - \n"<<TernarySearch(arr,0,n-1,19);
    cout<<"\nPosition of target Element - \n"<<TernarySearch(arr,0,n-1,24);
    cout<<"\nPosition of target Element - \n"<<TernarySearch(arr,0,n-1,31);
    cout<<"\nPosition of target Element - \n"<<TernarySearch(arr,0,n-1,48);
    cout<<"\nPosition of target Element - \n"<<TernarySearch(arr,0,n-1,51);
    cout<<"\nPosition of target Element - \n"<<TernarySearch(arr,0,n-1,63);
    cout<<"\nPosition of target Element - \n"<<TernarySearch(arr,0,n-1,67);
    cout<<"\nPosition of target Element - \n"<<TernarySearch(arr,0,n-1,73);
    cout<<"\nPosition of target Element - \n"<<TernarySearch(arr,0,n-1,81);
    cout<<"\nPosition of target Element - \n"<<TernarySearch(arr,0,n-1,92);
    
}