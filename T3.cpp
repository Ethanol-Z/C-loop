#include <iostream>
#include <cmath>
using namespace std;
void T3() {
    int a,b,c;
    cout << "The all narcissistic numbers are:" << endl;
    for(int i=100;i<=999;i++){
        a = i % 10;
        b = (i / 10) % 10;
        c = i / 100;
        if(pow(a,3)+pow(b,3)+pow(c,3)==i){
            cout << i << ' ';
        }
    }
    cout << endl;
}