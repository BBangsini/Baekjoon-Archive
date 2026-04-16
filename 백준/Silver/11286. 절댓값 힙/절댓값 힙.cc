#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    struct compare {
        bool operator() (int a, int b) {
            if (abs(a) == abs(b))
                return a > b;
            return abs(a) > abs(b);
        }
    };

    priority_queue<int, vector<int>, compare> pq;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x != 0) {
            pq.push(x);
        }
        else if (x == 0) {
            if (pq.empty()) {
                cout << 0 << "\n";
            }
            else {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
    }

    return 0;
}
