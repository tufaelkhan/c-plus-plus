#include<bits/stdc++.h>
using namespace std;

class CustomSort{
    public:
        char c;
        int cnt;
};
bool cmp(CustomSort a, CustomSort b){
    if(a.cnt > b.cnt) return true;
    else return false;
}
int main(){
    int n;
    cin>>n;
    CustomSort frq[26];
    for(int i = 0; i<26; i++){
        frq[i].c = (i+'a');
        frq[i].cnt = 0;
    }
    // for(int i = 0; i<26; i++){
    //     cout<<frq[i].c<<" "<<frq[i].cnt<<endl;
    // }

    for(int i = 0; i<n; i++){
        char c;
        cin>>c;
        frq[c-'a'].cnt++;
    }
    // for(int i = 0; i<26; i++){
    //     cout<<frq[i].c<<" "<<frq[i].cnt<<endl;
    // }
    sort(frq, frq+26, cmp);
    for(int i = 0; i<26; i++){
        if(frq[i].cnt > 0){
            // cout<<frq[i].c<<" "<<frq[i].cnt<<endl;
            for(int j = 0; j<frq[i].cnt; j++){
                cout<<frq[i].c;
            }
        }
    }
    return 0;
}