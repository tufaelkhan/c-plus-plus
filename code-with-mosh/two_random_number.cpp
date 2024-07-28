#include<bits/stdc++.h>
using namespace std;

int main(){
    const short maxValue = 6;
    const short minValue = 1;
    srand(time(0));
    short first = (rand()%(maxValue - minValue + 1)) + minValue;
    short second = (rand()%(maxValue - minValue + 1)) + minValue;
    cout << first <<","<<second;
    return 0;
}