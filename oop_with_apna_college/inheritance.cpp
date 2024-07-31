#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int roll;
};

class Teacher{
    public:
        string subject;
        double salary;
};

class TA: public Student, public Teacher{

};

int main(){
    TA t1;
    t1.name = "Tufael Khan";
    t1.roll = 3434;
    t1.subject = "C++";
    t1.salary = 10;
    cout<<t1.roll<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.salary<<endl;
    return 0;
}