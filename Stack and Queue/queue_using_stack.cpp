#include <bits/stdc++.h>
using namespace std;

//Implementation of Queue using Stack
struct Queue{
    stack<int>in,out;
    void Enqueue(int x){
        in.push(x);
    }
    int Dequeue(){
        if(in.size()==0)return -1;
        while(!in.empty()){
            int temp=in.top();
            in.pop();
            out.push(temp);
        }
        int front=out.top();
        out.pop();
        while(!out.empty()){
            int temp=out.top();
            out.pop();
            in.push(temp);
        }
        return front;
    }
    int Front(){
        if(in.size()==0)return -1;
        while(!in.empty()){
            int temp=in.top();
            in.pop();
            out.push(temp);
        }
        int front=out.top();
        while(!out.empty()){
            int temp=out.top();
            out.pop();
            in.push(temp);
        }
        return front;
    }
    int Rear(){
        if(in.size()==0)return -1;
        return in.top();
    }
};
int main() {
    Queue q;
    cout<<"1 - Enqueue\n2 - Dequeue\n3 - Front\n4 - Rear\n5 - Exit\n";
    while(true){
        cout<<"Enter operation to perform \n";
        int opt;
        cin>>opt;
        if(opt==1){
            int temp;
            cout<<"Write a number to enter to Enqueue ";
            cin>>temp;
            q.Enqueue(temp);
        }
        else if(opt==2){
            int dq=q.Dequeue();
            if(dq==-1)
                cout<<"";
            else
                cout<<"Removed Element is "<<dq<<"\n";
        }
        else if(opt==3){
            int dq=q.Front();
            if(dq==-1)
                cout<<"";
            else
                cout<<"Front element is "<<dq<<"\n";
        }
        else if(opt==4){
            int dq=q.Rear();
            if(dq==-1)
                cout<<"";
            else
                cout<<"Rear Element is "<<dq<<"\n";
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