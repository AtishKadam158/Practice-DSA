#include<bits/stdc++.h>
using namespace std;
bool leap(int y){
    if(y%400==0)
        return true;
    else if(y%100==0)
        return false;
    else if(y%4==0)
        return true;
    else
        return false;
}
int main(){
    int year=1976;
    cout<<"Check Weather the year is leap or not "<<year<<"\n";
    leap(year)? cout<<"Yes it is Leap Year" : cout<<"No it is not Prime";

}