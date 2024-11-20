#include <iostream>
using namespace std;
void T10() {
    for (int i = 0; i <= 33; i++) {
        for (int j = 0; j <= 50; j++) {
            for (int k = 0; k <= 200; k++) {
                if (3*i+2*j+k/2 == 100 && i+j+k == 100) {
                    cout << "Big horses: "<< i << " , medium horses: "<< j << " , small horses: "<< k << endl;
                }
            }
        }
    }
}