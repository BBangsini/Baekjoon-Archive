#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	string s;
	int N;
	cin >> s >> N;

	stack<char> left, right;

	for (int i = 0; i < s.size(); i++) {
		left.push(s[i]);
	}

	while (N--) {
		char cmd;
		cin >> cmd;

		if (cmd == 'L') {
			if (!left.empty()) {
				right.push(left.top());
				left.pop();
			}
		}
		else if (cmd == 'D') {
			if (!right.empty()) {
				left.push(right.top());
				right.pop();
			}
		}
		else if (cmd == 'B') {
			if (!left.empty()) {
				left.pop();
			}
		}
		if (cmd == 'P') {
			char M;
			cin >> M;
			left.push(M);
		}
	}
	while (!left.empty()) {
		right.push(left.top());
		left.pop();
	}
	while (!right.empty()) {
		cout << right.top();
		right.pop();
	}

	return 0;
}