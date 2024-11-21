#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
        string name;
        int age;
        Person(string name, int age){
            // name = nm;
            // age = ag;
            // (*this).name = name;
            // (*this).age = age;
            
            this->name = name;
            this->age = age;
        }
        void hello(){
            cout<<"Hello World"<<endl;
        }
};
int main(){
    Person mehedi("Mehedi Khan", 20);
    cout<<mehedi.name<<endl;
    cout<<mehedi.age<<endl;
    return 0;
}