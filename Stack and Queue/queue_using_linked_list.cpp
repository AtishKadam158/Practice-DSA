#include<bits/stdc++.h>
using namespace std;
//Implement queue using Linkedlist
struct node{
  int val;
  node* next;
  node(int x){
      val=x;
      next=NULL;
  }
};

struct Queue{
    node* front;
    node* rear;
    Queue() { front=NULL,rear=NULL; }
    
    bool Enqueue(int x){
        node* temp=new node(x);
        if(rear==NULL){
            front=temp;
            rear=temp;
        }
        rear->next=temp;
        rear=temp;
        return 1;  
    }
    int Dequeue(){
        int res;
        if(isEmpty()){
            return -1;
        }
        else{
            node* temp=front;
            res=temp->val;
            front =front->next;
            if(front==NULL)
                rear=NULL;
            delete temp;
        }
        return res;
    }
    bool isEmpty(){
        if(front==NULL)
            return 1;
        return 0;
    }
    int Front(){
        if(front==NULL)
            return -1;
        return front->val;
    }
    int Rear(){
        if(front==NULL)
            return -1;
        return rear->val;
    }
    void Display(){
        if(front==NULL){
            cout<<"Queue is Empty \n";
            return;
        }
        node* temp=front;
        cout<<"Front";
        while(temp){
            cout<<" -> "<<temp->val;
            temp=temp->next;
        }
        cout<<" <- Rear\n";
    }
    
};

int main(){
    cout<<"Which operation you want to perform\n1-Enqueue\n2-Dequeue\n3-isEmpty\n4-Front\n5-Rear\n6-Display\n7-Exit\n";
    Queue q;
    while(true){
        cout<<"Enter Operation to perform ";
        int opt;
        cin>>opt;
        if(opt==1){
            cout<<"Enter the number to push on Queue ";
            int temp;
            cin>>temp;
            if(q.Enqueue(temp))
                cout<<temp<<" pushed on Queue\n";
            else
                cout<<"Queue is Full!!\n";
        }
        else if(opt==2){
            int temp=q.Dequeue();
            if(temp==-1)
                cout<<"Queue is Empty\n";
            else
                cout<<temp<<" Got removed out\n";
        }
        else if(opt==3){
            if(q.isEmpty())
                cout<<"Queue is Empty\n";
            else
                cout<<"Queue has some elements "<<"\n";
        }
        else if(opt==4){
            if(q.Front()==-1)
                cout<<"Queue is Empty \n";
            else
                cout<<"The Front element is "<<q.Front()<<"\n";
                
        }
        else if(opt==5){
            if(q.Rear()==-1)
                cout<<"Queue is Empty \n";
            else
                cout<<"The Rear element is "<<q.Rear()<<"\n";
        }
        else if(opt==6){
            q.Display();
        }
        else if(opt==7){
            break;
        }
        else{
            cout<<"Enter correct option\n";
        }
    }
}