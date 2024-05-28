#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&arr,int low,int high){
    int i=low+1,j=high;
    int target=arr[low];
    while(true){
        while(i<=j && arr[i]<=target)i++;
        while(j>=i && arr[j]>target)j--;
        if(i>j)break;
        swap(arr[i],arr[j]);
    }
    swap(arr[j],arr[low]);
    return j+1;
}
void quicksort(vector<int>&arr,int low,int high){
    if(low<high){
        int pivot=partition(arr,low,high);
        quicksort(arr,0,pivot-1);
        quicksort(arr,pivot+1,high);
    }
}
int main(){
    vector<int>arr={6,7,4,2,1,9};
    int n=arr.size();
    cout<<"Our Original Array is - \n";
    for(auto itr:arr)cout<<itr<<" ";
    cout<<"\nNow Sorted Array is - \n";
    quicksort(arr,0,n-1);
    for(auto itr:arr)cout<<itr<<" ";

}