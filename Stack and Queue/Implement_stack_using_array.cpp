#include<bits/stdc++.h>
using namespace std;
//Implement Stack using Array(Size=15)

struct Stack{
    int n=5;
    vector<int>arr=vector<int>(n,-1);
    int top=-1;
    int Push(int x){
        if(top==n-1)
            return 0;
        arr[++top]=x;
        return 1;
    }
    int Pop(){
        if(top==-1)
            return -1;
        int temp=arr[top];
        arr[top--]=-1;
        return temp;
    }
    int Top(){
        return top==-1?-1:arr[top];
    }
    bool Empty(){
        return top==-1;
    }
    bool Full(){
        return top==n-1;
    }
};
int main(){
    Stack st;
    cout<<"1 - Push\n2 - Pop\n3 - Top\n4 - Empty\n5 - Full\n6 - Exit\n";
    while(true){
        cout<<"Enter operation to perform \n";
        int opt;
        cin>>opt;
        if(opt==1){
            int temp;
            cout<<"Write a number to enter to Push ";
            cin>>temp;
            if(st.Push(temp))
                cout<<"Element pushed "<<temp<<"\n";
            else
                cout<<"Stack is Full!!!\n";
        }
        else if(opt==2){
            int temp=st.Pop();
            if(temp==-1)
                cout<<"Stack is Empty \n";
            else
                cout<<"Removed Element is "<<temp<<"\n";
        }
        else if(opt==3){
            int temp=st.Top();
            if(temp==-1)
                cout<<"Stack is Empty!!\n";
            else
                cout<<"Top element of Stack is "<<temp<<"\n";
        }
        else if(opt==4){
            if(st.Empty())
                cout<<"Yess Stack is Empty\n";
            else
                cout<<"Stack is Not Empty\n";
        }
        else if(opt==5){
            if(st.Full())
                cout<<"Yess Stack is Full\n";
            else
                cout<<"Stack is Not Full\n";
        }
        else if(opt==6){
            cout<<"Terminating the loop \n";
            break;
        }
        else{
            cout<<"Oops!! Looks like You have entered incorrect option \n";
        }
    }
}