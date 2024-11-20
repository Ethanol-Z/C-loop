#include <iostream>
using namespace std;
void T10() {
    for (int i = 0; i <= 33; i++) {
        for (int j = 0; j <= 50; j++) {
            int k = 100 - i - j;
                if (3*i+2*j+k/2 == 100 && j % 2 == 0) {
                    cout << "Big horses: "<< i << " , medium horses: "<< j << " , small horses: "<< k << endl;
                }
        }
    }
}