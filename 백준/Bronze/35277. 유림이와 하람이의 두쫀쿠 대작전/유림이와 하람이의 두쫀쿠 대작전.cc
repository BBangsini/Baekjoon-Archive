#include <iostream>

using namespace std;

int main () {
    int n, ans = 0;
    cin >> n;
    
    while (true) {
        if (n < 2000) break;
        n -= 2000;
        ans++;
    }
    cout << ans << "\n";
    
    return 0;
}