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

int main(){
    char name[100] = "Rahim Khan";
    Student* rahim = new Student(10, 9, 'B', name);
    // cout<<(*rahim).name<<endl;
    // cout<<(*rahim).section<<endl;
    // cout<<(*rahim).cls<<endl;

    //shortcut way
    // cout<<rahim->cls<<endl;
    // cout<<rahim->section<<endl;
    // cout<<rahim->name<<endl;

    // delete an object
    delete rahim;

     cout<<rahim->cls<<endl;
    cout<<rahim->section<<endl;
    cout<<rahim->name<<endl;
    return 0;
}