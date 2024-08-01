#include<bits/stdc++.h>
using namespace std;

class Print{
    public:
        void Show(int x){
            cout<<"int : "<<x<<endl;
        }
        void Show(char ch){
            cout<<"Char : "<<ch<<endl;
        }
};

int main(){
    Print p1;
    p1.Show('&');
    return 0;
}