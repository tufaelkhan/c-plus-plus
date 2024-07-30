#include<bits/stdc++.h>
using namespace std;

class Teacher{
    // property //attribute
private:
    double salary;
public:
    //non-parameterized constructor
    Teacher(){
        dept = "Computer Science and Engineering";
    };
    //parameterized constructor
    Teacher(string n, string d, string s, double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    };
    string name;
    string dept;
    string subject;
    // methods  //member function
    void changeDept(string newDept){
        dept = newDept;
    }
    // setter function
    // void setSalary(double s){
    //     salary = s;
    // }
    // getter function
    // double getSalary(){
    //     return salary;
    // };
    
    void getInfo(){
        cout <<"name : " <<name<<endl;
        cout <<"subject : " <<subject<<endl;
        cout <<"dept : " <<dept<<endl;
        cout <<"Salary : " <<salary<<endl;
    };
};

class Student{
    string name;
    int rollNo;
    int age;
};

class Account{
    private:
        double balance;
        string password;
    public:
        string accountId;
        string userName;
};

int main(){
    // Teacher t1;
    // t1.name = "Tufael Khan";
    // t1.subject = "C++";

    // t1.setSalary(25000);
    // cout<<t1.dept<<endl;
    // cout<<t1.getSalary()<<endl;

    Teacher t2("Tufael","Computer","C++",10200);
    t2.getInfo();
    return 0;
}