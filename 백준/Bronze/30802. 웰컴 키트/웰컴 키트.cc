#include <iostream>

using namespace std;

int main() {
    long long n, arr[6], t, p;
    long long ans = 0, x, y;
    
    cin >> n;
    for (int i = 0; i < 6; i++) cin >> arr[i];
    cin >> t >> p;

    for (int i = 0; i < 6; i++)
        ans += (arr[i] + t - 1) / t;

    x = n / p;
    y = n % p;
    
    cout << ans << "\n" << x << " " << y << "\n";
    
    return 0;
}