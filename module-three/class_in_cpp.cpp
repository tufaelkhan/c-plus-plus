#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        char name[100];
        int roll;
        int cls;
        char section;
};

int main(){
    Student tufael;
    tufael.roll = 24;
    tufael.cls = 8;
    tufael.section = 'A';
    char nm[100] = "Tufael";
    strcpy(tufael.name, nm);

    Student Karim;
    Karim.roll = 20;
    Karim.cls = 8;
    Karim.section = 'A';
    char kr[100] = "Karim";
    strcpy(Karim.name, kr);
    cout<<Karim.roll<<endl;
    return 0;
}