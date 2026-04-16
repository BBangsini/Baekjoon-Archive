#include <iostream>

using namespace std;

int main () {
    int n, m, ans = 0;
    cin >> n >> m;
    
    while (true) {
        if (n >= 2 && m >= 2) {
            n -= 2;
            m -= 2;
            ans++;
            
            if (n < 2 || m < 2) break;
        }
    }
    
    cout << ans;
    
    return 0;
}