#include <iostream>
#include <cstdlib>
using namespace std;
extern void T1();
extern void T2();
extern void T3();
extern void T4();
extern void T5();
extern void T6();
extern void T7();
extern void T8();
extern void T9();
extern void T10();
extern void T11();
int main() {
    int choose;
    start:
    system("cls");
    cout << "Select an option:" << endl;
    cout << "1. T1" << endl;
    cout << "2. T2" << endl;
    cout << "3. T3" << endl;
    cout << "4. T4" << endl;
    cout << "5. T5" << endl;
    cout << "6. T6" << endl;
    cout << "7. T7" << endl;
    cout << "8. T8" << endl;
    cout << "9. T9" << endl;
    cout << "10. T10" << endl;
    cout << "11. T11" << endl;
    cin >> choose;
    switch (choose) {
        case 1:
            T1();break;
        case 2:
            T2();break;
        case 3:
            T3();break;
        case 4:
            T4();break;
        case 5:
            T5();break;
        case 6:
            T6();break;
        case 7:
            T7();break;
        case 8:
            T8();break;
        case 9:
            T9();break;
        case 10:
            T10();break;
        case 11:
            T11();break;
        default:
            cout << "Invalid Choice!" << endl;
            system("sleep 1");
            goto start;
    }
    cout << "Run again? If you don't want to do that, just simply type `0`." << endl;
    cin >> choose;
    if (choose != 0)  goto start;
    return 0;
}