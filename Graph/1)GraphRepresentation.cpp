#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;//n-nodes and m-edges for input
    /*Input - 
    5-n 6-m Assume
    2 1
    1 3
    2 4
    3 4
    2 5
    4 5 */
    //Store - 1 matrix and 2 List
    //Adjacency matrix - Space O(N*N);
    cin>>n;
    cin>>m;
    bool adj[n+1][n+1];
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a,b;
        adj[a][b]=1;
        adj[b][a]=1;//Cosidring bidirectional graph
    }
    //Adjacency List O(2*M)-- For Bi directional Graph
    vector<int> adjl[n+1];
    for(int i=0;i<m;i++){
        int a=0,b=0;
        cin>>a>>b;
        adjl[a].push_back(b);//Pushing b to list of node a
        adjl[b].push_back(a);//Required only when Bi directed Graph is there
    }
    //Weighted graphs
    //1 Adjacency matrix representations
    int adjw[n+1][n+1];
    for(int i=0;i<m;i++){
        int a,b,wt;
        cin>>a>>b>>wt;
        adjw[a][b] = wt;
        adjw[b][a] = wt;
    }
    //2 Adjacency List Representations
    vector<pair<int,int>> adjwl[n+1];
    for(int i=0;i<m;i++){
        int a,b,wt;
        cin>>a>>b>>wt;
        pair<int,int> p={b,wt};//Creating pairs with weight as second
        adjwl[a].push_back(p);
        pair<int,int> q={a,wt};//Creating pairs with weight as second
        adjwl[b].push_back(q);
    }

}