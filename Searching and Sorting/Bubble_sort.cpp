#include<bits/stdc++.h>
using namespace std;
void BubbleSort(vector<int>&arr){
    int n=arr.size();
    bool swapped;
    for(int i=0;i<n-1;i++){
        swapped=true;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]),swapped=false;
        }
        if(swapped)
            break;
    }
}
int main(){
    vector<int>arr={6,7,4,2,1,9};
    int n=arr.size();
    cout<<"Our Original Array is - \n";
    for(auto itr:arr)cout<<itr<<" ";
    cout<<"\nNow Sorted Array is - \n";
    BubbleSort(arr);
    for(auto itr:arr)cout<<itr<<" ";

}