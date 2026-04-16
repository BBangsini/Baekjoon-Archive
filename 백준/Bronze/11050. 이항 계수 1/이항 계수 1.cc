#include <iostream>

using namespace std;

int Factorial(int num) {
    int res = 1;
    for (int i = 1; i <= num; i++) {
        res *= i;
    }
    
    return res;
}

int main() {
    int n, k;
    cin >> n >> k;

    cout << Factorial(n) / (Factorial(k) * Factorial(n - k));

    return 0;
}