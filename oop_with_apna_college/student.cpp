#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        double *cgpaPtr;
    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    Student(Student &obj){
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }
    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"CGPA : "<<*cgpaPtr<<endl;
    }
};

int main(){
    Student s1("Tufael Khan", 3.80);
    s1.getInfo();
    Student s2(s1);
    *s2.cgpaPtr = 4.00;
    s2.name = "Sujoy Kumar";
    s1.getInfo();
    s2.getInfo();
    return 0;
}