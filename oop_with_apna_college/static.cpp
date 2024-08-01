#include<bits/stdc++.h>
using namespace std;

void fun(){
    static int x = 0;
    cout<<"X : "<<x<<endl;
    x++;
};

class A{
    public:
        int x;
        void incX(){
            x = x+1;
        }
};

int main(){
    // fun();
    // fun();
    // fun();

    A obj1;
    A obj2;
    obj1.x = 100;
    obj2.x = 200;
    cout<<obj1.x<<endl;
    obj1.incX();
    cout<<obj2.x<<endl;
    return 0;
}