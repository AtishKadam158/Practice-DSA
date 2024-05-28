#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>ls={4,5,6};
    ls.push_back(7);
    ls.push_back(8);
    ls.push_front(3);
    ls.push_front(2);
    cout<<"This is the current List - "<<"\n";
    for(auto itr : ls)
        cout<<itr<<" ";
    cout<<"\nSize of the List is - \n"<<ls.size();
    cout<<"\nFront Element in the List - "<<ls.front();
    cout<<"\nLast Element in the List - "<<ls.back();
    cout<<"\nFront Element in the List that is popped - "<<ls.front();
    ls.pop_front();
    cout<<"\nSize of the List is - \n"<<ls.size();
    cout<<"\nLast Element in the List that is popped - "<<ls.back();
    ls.pop_back();
    cout<<"\nSize of the List is - \n"<<ls.size();
    cout<<"\nThis is the current List - "<<"\n";
    for(auto itr : ls)
        cout<<itr<<" ";
}