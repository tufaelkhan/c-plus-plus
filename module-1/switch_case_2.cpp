#include<iostream>
using namespace std;

int main(){
    char a;
    cin>>a;
    switch(a){
        case 'a':
            cout<<"Vowel A"<<endl;
            break;
        case 'e':
            cout<<"Vowel E"<<endl;
            break;
        case 'i':
            cout<<"Vowel I"<<endl;
            break;
        case 'o':
            cout<<"Vowel O"<<endl;
            break;
        case 'u':
            cout<<"Vowel U"<<endl;
        default:
            cout<<"consonant";
    }
    return 0;
}