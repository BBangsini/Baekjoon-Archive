#include <iostream>
#include <deque>
using namespace std;

struct Balloon {
    int mov;
    int idx;
};

deque<Balloon> dq;

void init() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        dq.push_back({ a, i });
    }
}

void solve() {
    while (!dq.empty()) {
        Balloon cur = dq.front();
        cout << cur.idx << " ";
        dq.pop_front();

        if (dq.empty()) break;

        if (cur.mov < 0) {
            for (int i = 0; i < -cur.mov; i++) {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
        else {
            for (int i = 0; i < cur.mov - 1; i++) {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
    }
}

int main() {
    init();
    solve();

    return 0;
}