#include <iostream>
#include <cstdio>
using namespace std;
void T5() {
    int i = 0;
    int chr = 0, num = 0, space = 0, other = 0;
    char ch[10000] = {0};
    cout << "Type something..." << endl << "To end your input, just hit enter, then Ctrl-Z, and hit enter again, which will send a EOF to the program." << endl;
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
    cout << "Characters: " << chr << ", " << "Numbers: " << num << ", "<< "Other characters(EOF not included.): " << other-1 << " " << "Spaces: " << space << endl;
}