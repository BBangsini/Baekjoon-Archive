#include <iostream>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int arr[10], check[10], ans = 0;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        check[i] = arr[i] % 42;
    }
    
    for (int i = 0; i < 10; i++) {
        ans++;
        for (int j = 0; j < 10; j++) {
            if (i == j) break;
            if (check[i] == check[j]) {
                ans--;
                break;
            }
        }
    }
    
    cout << ans << "\n";
    
    return 0;
}