#include <iostream>
using namespace std;

int main () {
    int arr[10], max = 0, ans = 0;

    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
        
        if (max < arr[i]) {
            max = arr[i];
            ans = i + 1;
        }
    }

    cout << max << "\n" << ans;

    return 0;
}