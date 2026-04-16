#include <iostream>
using namespace std;

int main () {
    int num1, num2;
    int n3, n4, n5, n6;
    cin >> num1 >> num2;
    
    n3 = num1 * (num2 % 10);
    n4 = num1 * (num2 % 100 - num2 % 10); 
    n5 = num1 * (num2 - (num2 % 100)); 
    n6 = n3 + n4 + n5;
    
    cout << n3 << "\n" << n4 / 10 << "\n" << n5 / 100 << "\n" << n6;
    return 0;
}