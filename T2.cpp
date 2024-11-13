#include <iostream>
using namespace std;
void T2() {
    int a, b, temp;
    cout<<"Enter two numbers, I'll give you the GCD of them.";
    cin>>a>>b;
    do {
        temp=a%b;
        if(temp!=0) {
            a=b;
            b=temp;
        }
    }while(temp!=0);
    cout << "GCD of two numbers: " << b << endl;
}