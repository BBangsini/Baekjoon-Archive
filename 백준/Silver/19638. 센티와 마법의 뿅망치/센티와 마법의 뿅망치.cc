#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, h, t;
    cin >> n >> h >> t;

    priority_queue<int> pq;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pq.push(x);
    }

    int cnt = 0; 
    while (t-- && pq.top() >= h && pq.top() != 1) {
        int top = pq.top();
        pq.pop();
        pq.push(top / 2);
        cnt++;
    }

    if (pq.top() < h) {
        cout << "YES\n" << cnt << "\n";
    }
    else {
        cout << "NO\n" << pq.top() << "\n";
    }

    return 0;
}
