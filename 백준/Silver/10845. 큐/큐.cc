#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<int> Q;
    int n;
    cin >> n;
    string m;

    while (n--) {
        cin >> m;

        if (m == "push") {
            int x;
            cin >> x;
            Q.push(x);
        }
        else if (m == "pop") {
            if (Q.empty() == 0) {
                cout << Q.front() << "\n";
                Q.pop();
            }
            else {
                cout << -1 << "\n";
            }
        }
        else if (m == "size") {
            cout << Q.size() << "\n";
        }
        else if (m == "empty") {
            cout << Q.empty() << "\n";
        }
        else if (m == "front") {
            if (Q.empty() == 0) {
                cout << Q.front() << "\n";
            }
            else {
                cout << -1 << "\n";
            }
        }
        else if (m == "back") {
            if (Q.empty() == 0) {
                cout << Q.back() << "\n";
            }
            else {
                cout << -1 << "\n";
            }
        }
    }

    return 0;
}
