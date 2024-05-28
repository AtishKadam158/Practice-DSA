#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=9;
    //Adjacency List reperesentation
    vector<int>adjl[n+1]={
        {},
        {2,6},
        {1,3,4},
        {2},
        {2,5},
        {4,8},
        {1,7,9},
        {6,8},
        {5,7},
        {6}
    };
    //Printing Level orer traversal in single line
    int starting_node=1;
    vector<bool>visited(n+1);
    for(int i=0;i<n+1;i++) 
        visited[i]=0;
    visited[starting_node]=1;
    queue<int>q;
    q.push(starting_node);
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        int x=adjl[temp].size();
        for(int i=0;i<x;i++){
            if(visited[adjl[temp][i]]==false){
                q.push(adjl[temp][i]);
                visited[adjl[temp][i]]=1;
            }
        }
        cout<<temp<<" ";
    }
    cout<<"\n";
    //Printing Level wise in level wise manner
    queue<int>lq;
    lq.push(starting_node);
    vector<bool>visi(n+1);
    for(int i=0;i<n+1;i++) 
        visi[i]=0;
    visi[starting_node]=1;
    int level=0;
    while(!lq.empty()){
        cout<<"Level : "<<level++<<"  ";
        int z=lq.size();
        for(int i=0;i<z;i++){
            int a=lq.front();
            lq.pop();
            int b=adjl[a].size();
            cout<<a<<" ";
            for(int j=0;j<b;j++){
                if(visi[adjl[a][j]]==0){
                    visi[adjl[a][j]]=1;
                    lq.push(adjl[a][j]);
                }
            }
        }
        cout<<"\n";
    }
}

//Space Complexity O(N)+O(N)+O(N)=O(N) adjl+visi+recurssionstack space
//Time Complexity - O(N)+O(2*E) 
