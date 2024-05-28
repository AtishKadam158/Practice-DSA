//Non Comparison Based
//Given - Input Array and Range(Compulsion) - k from 1 to k
//Step - 1 
#include<bits/stdc++.h>
using namespace std;
void CountingSort(vector<int>&arr,int k){
    vector<int>temp(k+1,0);
    for(auto itr:arr){
        temp[itr]++;
    }
    int l=0;
    for(int i=1;i<=k;i++){
        while(temp[i]>0){
            arr[l++]=i;
            temp[i]--;
        }
    }
}
int main(){
    vector<int>arr={170,45,75,90,802,24,2,66};
    int n=arr.size();
    int k=803;
    cout<<"Our Original Array is in range 1 to 803- \n";
    for(auto itr:arr)cout<<itr<<" ";
    cout<<"\nNow Sorted Array is - \n";
    CountingSort(arr,k);
    for(auto itr:arr)cout<<itr<<" ";

}