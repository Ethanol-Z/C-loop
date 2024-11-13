#include <iostream>
using namespace std;
void T4() {
    int num[10];
    int posn = 0, negn = 0, nought = 0;
    cout << "Input 10 integer numbers:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> num[i];
    }
    for (int i = 0; i < 10; i++) {
        if (num[i] < 0) {
            negn++;
        }
        else if (num[i] > 0) {
            posn++;
        }
        else {
            nought++;
        }
    }
    cout << "There are " << posn << " positive numbers in the given sequence, " << negn << " negative numbers, and " << nought << " zero numbers." << endl;
}