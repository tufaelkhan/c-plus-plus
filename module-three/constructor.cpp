#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        char name[100];
        int roll;
        int cls;
        char section;
        Student(int r, int c, char s, char* n){
            roll = r;
            cls = c,
            section = s;
            strcpy(name, n);
        }
};
Student fun(){
    char name[100] = "Mehedi";
    Student mehedi(10, 'C', 11, name);
    return mehedi;
}
int main(){
    Student mehedi = fun();
    cout<<mehedi.name;
    return 0;
}