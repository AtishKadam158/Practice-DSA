#include<bits/stdc++.h>
using namespace std;

int rod_cut(vector<int>prices,int n){
    vector<int>dp(n+1);
    dp[0]=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            dp[i]=max(dp[i],prices[j]+dp[i-j-1]);
        }
    }
    return dp[n];
}

int  main(){
    int n;
    cout<<"Enter the Size of Rod - \n";
    cin>>n;
    vector<int>prices(n);
    for(int i=0;i<n;i++){
        cout<<"Enter the price for size - "<<i+1<<" - ";
        cin>>prices[i];
    }
    int max_profit=rod_cut(prices,n);
    cout<<"\nThe max profit earned by Cutting this rod in n rods yeilds profit = "<<max_profit;
}