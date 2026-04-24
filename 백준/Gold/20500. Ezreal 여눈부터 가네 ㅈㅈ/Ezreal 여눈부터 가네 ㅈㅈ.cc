#include <iostream>

using namespace std;

#define MOD 1000000007

int n;
int num[1516][3];
bool visited[1516][3];

int solved(int len, int sum) {
    if (len == n - 1) {
        if ((sum + 5) % 3 == 0) return 1;

        return 0;
    }

    if (visited[len][sum]) return num[len][sum];

    visited[len][sum] = true;

    int ans = 0;

    ans += solved(len + 1, (sum + 1) % 3);
    ans %= MOD;

    ans += solved(len + 1, (sum + 5) % 3);
    ans %= MOD;

    return num[len][sum] = ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    cout << solved(0, 0) << "\n";

    return 0;
}