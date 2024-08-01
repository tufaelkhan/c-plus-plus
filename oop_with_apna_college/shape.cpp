#include<bits/stdc++.h>
using namespace std;
class Shape{    //abstract class
    virtual void Draw() = 0;    //pure virtual function
};

class Circle: public Shape{
    public:
        void Draw(){
            cout<<"Drawing Circle"<<endl;
        }
};

int main(){
    Circle c1;
    c1.Draw();
    return 0;
}