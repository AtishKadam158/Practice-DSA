#include<bits/stdc++.h>
using namespace std;
//Implement Stack using Queue

struct Stack{
    queue<int>q;
    void Push(int x){
        q.push(x);
    }
    int Pop(){
        int n=q.size();
        if(n==0)return -1;
        for(int i=0;i<n-1;i++){
            int temp=q.front();
            q.pop();
            q.push(temp);
        }
        int temp=q.front();
        q.pop();
        return temp;
    }
    int Top(){
        return q.size()==0 ?-1:q.back();
    }
    bool Empty(){
        return q.size()==0;
    }
};
int main(){
    Stack st;
    cout<<"1 - Push\n2 - Pop\n3 - Top\n4 - Empty\n5 - Exit\n";
    while(true){
        cout<<"Enter operation to perform \n";
        int opt;
        cin>>opt;
        if(opt==1){
            int temp;
            cout<<"Write a number to enter to Push ";
            cin>>temp;
            st.Push(temp);
        }
        else if(opt==2){
            int pp=st.Pop();
            if(pp==-1)
                cout<<"Stack is Empty\n";
            else
                cout<<"Removed Element is "<<pp<<"\n";
        }
        else if(opt==3){
            int temp=st.Top();
            if(temp==-1)
                cout<<"Stack is Empty\n";
            else
                cout<<"Top element is "<<temp<<"\n";
        }
        else if(opt==4){
            st.Empty() ? cout<<"Stack is Empty\n":cout<<"Stack is Not Empty\n";
        }
        else if(opt==5){
            cout<<"Terminating the loop \n";
            break;
        }
        else{
            cout<<"Oops!! Looks like You have entered incorrect option \n";
        }
        
    }
    return 0;
} 