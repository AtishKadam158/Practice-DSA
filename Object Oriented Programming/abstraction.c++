#include<bits/stdc++.h>
using namespace std;
//process of simplifying complex systems 
//by breaking them down into smaller, 
//more manageable parts while hiding unnecessary details. 
class circle{
    private:
        int radius;
        int area;
    public:
        void getradius(){
            cout<<"please enter the value of Radius \n";
            cin>>radius;
        }
        void printarea(){
            area=radius*radius*3.14;
            cout<<"\nThe area of circle is = "<<area;
        }

};
//
int main(){
    circle c1;
    c1.getradius();
    c1.printarea();

}