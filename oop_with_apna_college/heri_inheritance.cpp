#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
        string name;
        int age;
};

class Student:public Person{
    public:
        int rollNo;
};

class Teacher:public Person{
    public:
        string subject;
        double salary;
};

int main(){
    Teacher t1;
    t1.name = "Tufael Khan";
    t1.salary = 343.85;
    t1.age = 32;
    cout<<t1.name<<endl;
    cout<<t1.salary<<endl;
    cout<<t1.age<<endl;
    return 0;
}