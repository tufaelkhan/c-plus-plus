#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
    Student(){
        cout<<"Non-parameterized constructor";
    }
    Student(string name){
        this->name = name;
        cout<<"Parameterized constructor";
    }
};

int main(){
    Student s1("Tufael Khan");
    return 0;
}