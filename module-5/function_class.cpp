#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
        string name;
        int age;
        int marks1;
        int marks2;
        Person( string nm, int a, int m1, int m2){
            name = nm;
            age = a;
            marks1 = m1;
            marks2 = m2;
        }
        void hello(){
            cout<<name<<" "<<age<<endl;
        }
        int total_marks(){
            return marks1+marks2;
        }
};

int main(){
    Person rakib("Rakib Hasan", 20, 50, 80);
    cout<<rakib.total_marks()<<endl;
    return 0;
}