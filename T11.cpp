#include <iostream>
using namespace std;
void T11() {
    for (int i = 3; i >= 0; i--) {
        for (int j = i; j >= 0; j--) {
            cout << ' ';
        }
        for (int j = 1; j <= 7-2*i; j++) {
            cout << '*';
        }
        cout << endl;
    }
    for (int i = 1; i <= 3; i++) {
        for (int j = i; j >= 0; j--) {
            cout << ' ';
        }
        for (int j = 1; j <= 7-2*i; j++) {
            cout << '*';
        }
        cout << endl;
    }
}