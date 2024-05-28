#include<bits/stdc++.h>
using namespace std;
void dfs(int start,vector<int>adjl[],vector<bool>&visited){
    visited[start]=1;
    cout<<start<<" ";
    for(auto it : adjl[start]){
        if(visited[it]==0){
            dfs(it,adjl,visited);
        }
    }
}
int main(){
    int n=8;
    //Adjacency List reperesentation
    vector<int>adjl[n+1]={
        {},
        {2,3},
        {1,5,6},
        {1,4,7},
        {3,8},
        {2},
        {2},
        {3,8},
        {4,7},
    };
    vector<bool>visited(n+1);
    int starting_node=1;
    //1 2 5 6 3 4 8 7
    for(int i=0;i<=n;++i) visited[i]=0;
    dfs(starting_node,adjl,visited);
}

//Space Complexity 
//Time Complexity 
