#include <iostream>
#include <stack>
using namespace std;

int main() {
	int T;
	cin >> T;

	while (T--) {
		stack<char> st;
		char arr[51];
		cin >> arr;

		int i = 0;
		int YESorNO = 1;

		while (arr[i]) {
			if (arr[i] == '(') {
				st.push('(');
			}
			else if (arr[i] == ')') {
				if (st.empty()) { 
					YESorNO = 0;
					break;
				}
				st.pop();
			}
			i++;
		}

		if (!st.empty()) {
			YESorNO = 0;
		}

		if (YESorNO == 0)
			cout << "NO\n";
		else
			cout << "YES\n";
	}

	return 0;
}
