#include <iostream>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x, n, res = 0;
    cin >> x >> n;
    
    while (n--) {
        int a, b;
        cin >> a >> b;
        
        res += a * b;
    }
    
    if (x == res) cout << "Yes" << "\n";
    else cout << "No" << "\n";
    
    return 0;
}