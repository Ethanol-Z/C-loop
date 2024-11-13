#include <iostream>
#include <cmath>
using namespace std;
void T11() {
    int a, n;
    int ans = 0, temp;
    cout << "Enter two numbers, it will run like a+aa+aaa+..." << endl;
    cin >> a >> n;
    for (int i = 0; i <= n; i++) {
        temp = 0;
        for (int j = 0; j < i; j++) {
            temp += pow(10,j);
        }
        ans += a*temp;
    }
    cout << ans << endl;
}