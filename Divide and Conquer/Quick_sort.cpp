#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>& nums, int l, int r) {
    int pvt = nums[l];
    int ind = l;
    l++;
    while (l <= r) {
        while (l <= r && nums[l] <= pvt)
            l++;
        while (l <= r && nums[r] > pvt)
            r--;
        if (l < r)
            swap(nums[l], nums[r]);
    }
    swap(nums[ind], nums[r]);
    return r;
}

void Quick_Sort(vector<int>& nums, int l, int r) {
    if (l < r) {
        int pivot = partition(nums, l, r);
        Quick_Sort(nums, l, pivot - 1);
        Quick_Sort(nums, pivot + 1, r);
    }
}
int main(){
    vector<int>nums={12,23,2,54,23,24,0,123};
    Quick_Sort(nums,0,nums.size()-1);
    cout<<"Sorted Array -->";
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}