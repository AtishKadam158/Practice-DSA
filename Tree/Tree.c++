#include<bits/stdc++.h>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    
    ListNode(int val) : val(val),next(nullptr){};
};
void append(ListNode* head,int val){
    ListNode* temp=new ListNode(val);
    if(!head)
        head=temp;
    else{
        ListNode* temp=head;
        while(temp->next){
            temp=temp->next;
        }
        temp->next=temp;
    }
}
int main() {
    ListNode* head=nullptr;
    append(head,1);
    append(head,5);
    append(head,4);
    append(head,2);
    append(head,7);
    append(head,8);
    
}