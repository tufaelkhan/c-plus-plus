#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "HelloWorld";
    // string b = "World";
    // a = a+b;
    // cout<<a<<endl;
    // cout<<b<<endl;

    // a.erase(5, 1);
    a.replace(5, 0, " ");
    cout << a << endl;
    return 0;
}