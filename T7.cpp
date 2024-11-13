#include <iostream>
#include <cmath>
using namespace std;
void T7() {
    double pi = 0;
    for (int i = 1; i <= 1e6; i+=4) {
        pi += ((1.0/i)-(1.0/(i+2.0)));
    }
    cout << "Pi = " << 4.0*pi << endl;
}