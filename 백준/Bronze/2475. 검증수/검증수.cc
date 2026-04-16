#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, num5;
    int result;

    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    num1 = (num1) * (num1);
    num2 = (num2) * (num2);
    num3 = (num3) * (num3);
    num4 = (num4) * (num4);
    num5 = (num5) * (num5);

    result = num1 + num2 + num3 + num4 + num5;

    cout << result % 10 << endl;

    return 0;
}