#include <iostream>
using namespace std;
extern int factorial(int);
void T9() {
    int a, ans = 0;
    cout << "Enter a number: ";
    cin >> a;
    for (int i = 1; i <= a; i++) {
        ans += factorial(i);
    }
    cout << ans << endl;
}