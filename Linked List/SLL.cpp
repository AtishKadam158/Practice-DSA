#include<bits/stdc++.h>
using namespace std;
struct node{
    int val;
    node* ptr=NULL;
};
void printlinkedlist(struct node* head){
    cout<<"The Linked List is  -- \n";
    while(head){
        cout<<head->val<<" ";
        head=head->ptr;
    }
}
void insert(struct node* head,int n){
    struct node* num=new node(n);
    head->ptr=num;
}
void delete_with_value_k(struct node* head,int k){
    if(!head)return;
    struct node* prev=head;
    while(head){
        while(head->val==k){
            if(!head->ptr){
                prev->ptr=NULL;
                break;
            }
            head->val=head->ptr->val;
            if(head->ptr)
                head->ptr=head->ptr->ptr;
        }
        prev=head;
        head=head->ptr;
    }
}
void mergesort(){
    
}
/*void delete_with_given_ptr(struct node* head,int k){
    struct node* 
}
void delete_with_duplicate(struct node* head,int k){
    struct node* 
}*/
int main(){
    struct node* head=new node(1);
    struct node* tmp=head;
    int n;
    cout<<"Please enter the size of Linked list you want to create - \n";
    cin>>n;
    cout<<"We are Creating Linked List of size "<<n<<"\n";
    for(int i=0;i<n;i++){
        cout<<"Please enter the element to insert at index -"<<i<<"\n";
        int num;
        cin>>num;
        insert(tmp,num);
        tmp=tmp->ptr;
    }
    printlinkedlist(head->ptr);
    cout<<"\nEnter the value to delete from List "<<"\n";
    int k;
    cin>>k;
    delete_with_value_k(head->ptr,k);
    printlinkedlist(head->ptr);
}