#include <iostream>
using namespace std;
extern bool prime(int n);
void T6() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    if (prime(x)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}