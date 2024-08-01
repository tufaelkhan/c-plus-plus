#include<bits/stdc++.h>
using namespace std;

class Parent{
    public:
        void getInfo(){
            cout<<"Parent function";
        }
        virtual void Hello(){
            cout<<"Hello From Parent";
        }
};

class Child: public Parent{
    public:
        void getInfo(){
            cout<<"Child function";
        }
        void Hello(){
            cout<<"Hello From Child";
        }
};

int main(){
    Child c1;
    c1.Hello();
    return 0;
}