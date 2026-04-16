#include <iostream>
using namespace std;

int main() {
    int n, m = 1, end = 1;
    cin >> n;
    
    while (n > end) {
        end += 6 * m;
        m++;
    }
    
    cout << m << "\n";
    return 0;
}