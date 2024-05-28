#include<bits/stdc++.h>
using namespace std;
void insertion(vector<int>&arr){
    int n=arr.size();
    for(int i=1;i<n;i++){
        int j=i-1;
        while(j>=0 && arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            j--;
        }
    }
}
int main(){
    vector<int>arr={6,7,4,2,1,9};
    int n=arr.size();
    cout<<"Our Original Array is - \n";
    for(auto itr:arr)cout<<itr<<" ";
    cout<<"\nNow Sorted Array is - \n";
    insertion(arr);
    for(auto itr:arr)cout<<itr<<" ";

}