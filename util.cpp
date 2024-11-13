/*Some practical functions.
 *Only these, which some programs will use them.
*/
int max(int a, int b) {
    return a > b ? a : b;
}
//A overload version.
double max(double a, double b) {
    return a > b ? a : b;
}

int min(int a, int b) {
    return a < b ? a : b;
}

bool prime(int n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int factorial(int n) {
    if (n == 1) return 1;
    return n * factorial(n - 1);
}