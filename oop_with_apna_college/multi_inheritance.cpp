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

class GradStudent:public Student{
    public:
        string researchArea; 
};

int main(){
    GradStudent g1;
    g1.name = "Tufael Khan";
    g1.age = 22;
    g1.rollNo = 43422;
    g1.researchArea = "Quantum Computer";
    cout<<g1.name<<endl;
    cout<<g1.age<<endl;
    cout<<g1.researchArea<<endl;
    return 0;
}