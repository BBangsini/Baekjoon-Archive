#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    int result;
    int x, y;
    cin >> a >> b >> c >> d;
    
    result = a + b + c + d;
    
    x = result / 60;
    y = result % 60;
    cout << x << "\n" << y << "\n";
    
    return 0;
}