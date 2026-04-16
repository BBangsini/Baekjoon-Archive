#include <iostream>
using namespace std;

int main () {
    int n, m, s[4000] = {};
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    int a, b, c;
    for (int j = 0; j < m; j++) {
        cin >> a >> b >> c;
        
        if (a == 1) {
            s[b - 1] = c;
        }
        
        else if (a == 2) {
            for (int k = b - 1; k <= c - 1; k++) {
                s[k] = 1 - s[k];
            }
        }
    else if (a == 3) {
        for (int k = b - 1; k <= c - 1; k++) {
            s[k] = 0;
            }
        }
    else if (a == 4) {
        for (int k = b - 1; k <= c - 1; k++) {
            s[k] = 1;
            }
        }
    }
    for (int l = 0; l < n; l++) {
        cout << s[l] << " ";
    }
    return 0;
}