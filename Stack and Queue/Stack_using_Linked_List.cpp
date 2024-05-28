#include<bits/stdc++.h>
using namespace std;
//Implement stack using Linkedlist
struct node{
  int val;
  node* next;
  node(int x){
      val=x;
      next=NULL;
  }
};

struct Stack{
    node* top;
    Stack() { top = NULL; }
    bool isEmpty(){
        return top==NULL;
    }
    bool Push(int x){
        node* temp=new node(x);
        if(!temp)
            return 0;
        temp->next=top;
        top=temp;
        return 1;
    }
    int Pop(){
        if(isEmpty())
            cout<<"Oops Stack is Empty!!\n";
        int tem=top->val;
        node* temp=top;
        top=top->next;
        free(temp);
        return tem;
    }
    int Top(){
        if(isEmpty()){
            return -1;
        }
        else{
            return top->val;
        }
    }
    void Display(){
        if(isEmpty())
            cout<<"Stack is Underflow!!\n";
        cout<<"Printing the Stack top to bottom\n";
        node* temp=top;
        cout<<"top->";
        while(temp){
            cout<<temp->val<<"<-";
            temp=temp->next;
        }
        cout<<"Bottom\n";
    }
};

int main(){
    cout<<"Which operation you want to perform\n1-Push\n2-Pop\n3-Top\n4-Display\n5-Exit\n";
    Stack st;
    while(true){
        cout<<"Enter Operation to perform ";
        int opt;
        cin>>opt;
        if(opt==1){
            cout<<"Enter the number to push on stack ";
            int temp;
            cin>>temp;
            if(st.Push(temp))
                cout<<temp<<" got pushed on stack\n";
            else
                cout<<"Stack is Overflow!!\n";
        }
        else if(opt==2){
            int temp=st.Pop();
            if(temp==-1)
                cout<<"Stack is Empty\n";
            else
                cout<<temp<<" Got Popped out\n";
        }
        else if(opt==3){
            if(st.Top()==-1)
                cout<<"Stack is Empty\n";
            else
                cout<<"Top element is "<<st.Top()<<"\n";
        }
        else if(opt==4){
            st.Display();
        }
        else if(opt==5){
            break;
        }
        else{
            cout<<"Enter correct option\n";
        }
    }
}