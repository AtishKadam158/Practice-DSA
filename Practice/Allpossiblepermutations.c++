#include<bits/stdc++.h>
using namespace std;
void backtrack(vector<int>& nums, vector<vector<int>>& result, int start) {
    if (start == nums.size()) {
        result.push_back(nums);
        return;
    }

    for (int i = start; i < nums.size(); i++) {
        swap(nums[start], nums[i]);
        backtrack(nums, result, start + 1);
        swap(nums[start], nums[i]);  // backtrack
    }
}
vector<vector<int>>permutation(vector<int>&arr){
    vector<vector<int>> result;
    backtrack(arr, result, 0);
    return result;
}
int main(){
    vector<int>arr={1,2,3};
    vector<vector<int>>perm=permutation(arr);
    int n=perm.size();
    for(int i=0;i<n;i++){
        for(auto itr:perm[i]){
            cout<<itr<<" ";
        }
        cout<<"\n";
    }

}