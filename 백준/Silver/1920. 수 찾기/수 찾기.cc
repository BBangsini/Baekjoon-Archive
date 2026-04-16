#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort (a.begin(), a.end());

    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;

        if (binary_search(a.begin(), a.end(), x)) {
            cout << 1 << "\n";
        }
        else 
            cout << 0 << "\n";
    }

    return 0;
}