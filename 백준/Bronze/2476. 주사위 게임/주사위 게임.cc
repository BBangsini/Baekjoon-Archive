#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;

    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;

        int res = 0;

        if (a == b && b == c) 
            res = 10000 + a * 1000;
        
        else if (a == b || a == c) 
            res = 1000 + a * 100;
        
        else if (b == c) 
            res = 1000 + b * 100;
        
        else 
            res = max(a, max(b, c)) * 100;

        if (res > ans) 
            ans = res;
    }   
    cout << ans << "\n";
    
    return 0;
}