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
    // destructor
    ~Student(){
        cout<<"I, Delete everything from memory";
        delete cgpaPtr;
    }
    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"CGPA : "<<*cgpaPtr<<endl;
    }
};

int main(){
    Student s1("Tufael Khan", 3.80);
    s1.getInfo();
    return 0;
}