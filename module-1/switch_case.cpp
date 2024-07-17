#include<iostream>
using namespace std;

int main(){
    int value;
    cin>>value;
    switch(value){
        case 1:
            cout<<"ONE"<<endl;
            break;
        case 2:
            cout<<"TWO"<<endl;
            break;
        case 3:
            cout<<"THREE"<<endl;
            break;
        case 4:
            cout<<"FOUR"<<endl;
            break;
        case 5:
            cout<<"FIVE"<<endl;
            break;
        default:
            cout<<"No One";
    }
    return 0;
}