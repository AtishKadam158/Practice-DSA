#include<bits/stdc++.h>
using namespace std;
void dfs(int start,vector<vector<int>>adjl,vector<int>&visited){
    visited[start]=1;
    for(auto itr:adjl[start]){
        if(!visited[itr]) dfs(itr,adjl,visited);
    }
}
void check_no_of_provinces(vector<vector<int>>graph){
    int V=graph.size();
    //Convert to adjacency List
    vector<vector<int>>adjl(V);
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            if(graph[i][j]==1 && i!=j){
                adjl[i].push_back(j);
                adjl[j].push_back(i);
            }
        }
    }
    //dfs traversal
    int res=0;
    vector<int>visited(V,0);
    for(int i=0;i<V;i++){
        if(!visited[i]){
            res++;
            dfs(i,adjl,visited);
        }
    }
    cout<<"In this grpah there is "<<res<<"Provinces"<<"\n";
}
int main(){
   vector<vector<int>>graph1{
        {1,1,0},
        {1,1,0},
        {0,0,1}
   };
   vector<vector<int>>graph2{
        {1,0,0},
        {0,1,0},
        {0,0,1}
   };
   check_no_of_provinces(graph1);
   check_no_of_provinces(graph2);
}