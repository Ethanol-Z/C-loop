#include <iostream>
#include <cstdio>
using namespace std;
void T5() {
    int i = 0;
    int chr = 0, num = 0, space = 0, other = 0;
    char ch[10000] = {0};
    cout << "Type something..." << endl;
    while (ch[i-1] != EOF) {
        ch[i] = getchar();
        i++;
    }
    i = 0;
    while (ch[i] != EOF) {
        if (ch[i] == ' ') {
            space++;
        }
        else if (ch[i] >= '0' && ch[i] <= '9') {
            num++;
        }
        else if (ch[i] >= 'A' && ch[i] <= 'Z' || ch[i] >= 'a' && ch[i] <= 'z') {
            chr++;
        }
        else {
            other++;
        }
        i++;
    }
    cout << chr << " " << num << " " << other << " " << space << endl;
}