#include <iostream>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, v;

    cin >> a >> b >> v;

    int res;

    if ((v - b) % (a - b) == 0) {
        res = (v - b) / (a - b);
    }
    else {
        res = (v - b) / (a - b) + 1;
    }
    
    cout << res;

    return 0;
}