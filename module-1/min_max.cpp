#include<iostream>
#include<algorithm>
using namespace std;

// int min(int a, int b){
//     if(a<b) return a;
//     else return b;
// }

// int max(int a, int b){
//     if(a>b) return a;
//     else return b;
// }

int main(){
    int a,b;
    cin>>a>>b;
    int my_min = min(a,b);
    int my_max = max(a,b);
    cout<<my_min<<endl<<my_max;
    return 0;
}