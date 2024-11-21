#include <bits/stdc++.h>
using namespace std;
namespace Rakib
{
    int age = 23;
    void Hello()
    {
        cout << "Hello and welcome";
    }
}
namespace Sakib
{
    int age2 = 30;
    void Hello2()
    {
        cout << "welcome Sakib";
    }
}
using namespace Rakib;
using namespace Sakib;
int main()
{
    // cout<<Rakib::age<<endl;
    // cout<<Sakib::age2<<endl;

    cout << age << endl;
    cout << age2 << endl;
    return 0;
}