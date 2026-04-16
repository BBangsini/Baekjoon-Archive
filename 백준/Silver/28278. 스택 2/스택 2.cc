#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie (nullptr);
	stack<int> st;
	int N, x;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		if (num == 1) {
			cin >> x;
			st.push(x);
		}
		if (num == 2) {
			if (st.empty() == 1) {
				cout << "-1" << "\n";
			}
			else if (st.empty() == 0) {
				cout << st.top() << "\n";
				st.pop();
			}
		}
		if (num == 3) {
			cout << st.size() << "\n";
		}
		if (num == 4) {
			cout << st.empty() << "\n";
		}
		if (num == 5) {
			if (st.empty() == 1) {
				cout << "-1" << "\n";
			}
			else if (st.empty() == 0) {
				cout << st.top() << "\n";
			}
		}
	}
}