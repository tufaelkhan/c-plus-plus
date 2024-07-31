#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
        string name;
        int age;

        Person(string name, int age){
            this->name = name;
            this->age = age;
        }

        Person(){
            cout<<"Parent Constructor"<<endl;
        }
};

class Student:public Person{
    public:
        int rollNo;
    Student(string name, int age, int rollNo): Person(name, age){
        this->rollNo = rollNo;
    };
    
    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Roll : "<<rollNo<<endl;
    }
};

int main(){
    Student s1("Rahul",15,2323);
    s1.getInfo();
    return 0;
}