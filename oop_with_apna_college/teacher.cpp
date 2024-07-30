#include<bits/stdc++.h>
using namespace std;

class Teacher{
    // property //attribute
private:
    double salary;
public:
    string name;
    string dept;
    string subject;
    //non-parameterized constructor
    Teacher(){
        dept = "Computer Science and Engineering";
    };
    //copy constructor
    Teacher(string name, string dept, string subject, double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    };

    // methods  //member function
    void changeDept(string newDept){
        dept = newDept;
    }
    void getInfo(){
        cout<<"name : "<<name<<endl;
        cout<<"Subject : "<<subject<<endl;
    };
};


int main(){
    Teacher t1("Tufael","Computer","C#",25000);
    // t1.getInfo();
    Teacher t2(t1);
    t2.getInfo();
    return 0;
}