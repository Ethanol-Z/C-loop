#include <iostream>
using namespace std;
extern int max(int a, int b);
extern int min(int a, int b);
void T1() {
    int  i = 0, maxn = 0, minn = 0;
    int score[100];
    cout << "Enter numbers separated by spaces, end them with `-1`:" << endl;
    while (score[i-1] != -1) {
        cin >> score[i];
        i++;
    }
    i-=2;
    for (int j = 0; j < i; j++) {
        maxn = max(score[j], score[j+1]);
        minn = min(score[j], score[j+1]);
    }
    cout << "The highest score is:" << maxn << endl;
    cout << "The lowest score is:" << minn << endl;
}