#include<bits/stdc++.h>
using namespace std;

//Implement Queue using Array

struct Queue{
    int front, rear, capacity;
    int* queue;
    Queue(int c){
        front = rear = 0;
        capacity = c;
        queue = new int[c];
    }
    ~Queue() { delete[] queue; }
    
    bool Enqueue(int x){
        if(rear==capacity)
            return 0;
        else{
            queue[rear]=x;
            rear++;
            return 1;
        }
    }
    
    int Dequeue(){
        if(rear==front)return -1;
        int res=queue[front];
        for(int i=front;i<rear-1;i++){
            queue[i]=queue[i+1];
        }
        rear--;
        return res;
    }
    
    int Rear(){
        if(rear==front)
            return -1;
        else
            return queue[rear-1];
    }
    
    int Front(){
        if(rear==front)
            return -1;
        else
            return queue[front];
    }
    
    void Display(){
        if(rear==front){
            cout<<"Queue is Empty!!\n";
            return;
        }
        else{
            for(int i=front;i<rear;i++){
                cout<<queue[i]<<" ";
            }
            cout<<"\n";
        }
    }
};

int main(){
    cout<<"Enter the size of Queue you want to prepare \n";
    int size;
    cin>>size;
    Queue q(size);
    cout<<"1 - Enqueue\n2 - Dequeue\n3 - Rear\n4 - Front\n5 - Display\n6 - Exit\n";
    while(true){
        cout<<"Enter operation to perform \n";
        int opt;
        cin>>opt;
        if(opt==1){
            int temp;
            cout<<"Write a number to enter to Push ";
            cin>>temp;
            if(q.Enqueue(temp))
                cout<<"Element pushed "<<temp<<"\n";
            else
                cout<<"Queue is Full!!!\n";
        }
        else if(opt==2){
            int temp=q.Dequeue();
            if(temp==-1)
                cout<<"Queue is Empty \n";
            else
                cout<<"Removed Element is "<<temp<<"\n";
        }
        else if(opt==3){
            int temp=q.Rear();
            if(temp==-1)
                cout<<"Queue is Empty!!\n";
            else
                cout<<"Rear element of Queue is "<<temp<<"\n";
        }
        else if(opt==4){
            int temp=q.Front();
            if(temp==-1)
                cout<<"Queue is Empty!!\n";
            else
                cout<<"Front element of Queue is "<<temp<<"\n";
        }
        else if(opt==5){
            q.Display();
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