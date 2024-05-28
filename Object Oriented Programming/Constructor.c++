#include <bits/stdc++.h>
using namespace  std;
//constructor is a special method which is invoked automatically at the time of object creation
class circle{
    private:
        int rad;
        float area;
    public:
        circle(){
            cout<<"circle object is Created";
        }
        void values(int radi){
            rad=radi;
        }
        void calarea(){
            area=rad*rad*3.14;
            cout<<"Arare of circle is = "<<rad*rad*3.14;
        }
        
};
int main() {
   circle c1;
   //c1.values(2);
   //c1.calarea();

}