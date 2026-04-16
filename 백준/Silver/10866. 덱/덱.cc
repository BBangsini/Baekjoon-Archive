#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    deque<int> D;
    int n;
    cin >> n;
    string m;

    while (n--) {
        cin >> m;

        if (m == "push_front") {
            int x;
            cin >> x;
            D.push_front(x);
        }

        else if (m == "push_back") {
            int x;
            cin >> x;
            D.push_back(x);
        }

        else if (m == "pop_front") {
            if (!D.empty()) {
                cout << D.front() << "\n";
                D.pop_front();
            }
            else if (D.empty() == 1) {
                cout << -1 << "\n";
            }
        }

        else if (m == "pop_back") {
            if (!D.empty()) {
                cout << D.back() << "\n";
                D.pop_back();
            }
            else if (D.empty() == 1) {
                cout << -1 << "\n";
            }
        }

        else if (m == "size") {
            cout << D.size() << "\n";
        }

        else if (m == "empty") {
            cout << D.empty() << "\n";
        }

        else if (m == "front") {
            if (D.empty() == 1) {
                cout << -1 << "\n";
            }
            else if (!D.empty()) {
                cout << D.front() << "\n";
            }
        }

        else if (m == "back")
            if (D.empty() == 1) {
                cout << -1 << "\n";
            }
            else if (!D.empty()) {
                cout << D.back() << "\n";
            }
    }

    return 0;
}
