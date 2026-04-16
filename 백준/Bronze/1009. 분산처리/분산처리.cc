#include <iostream>
using namespace std;

int main() {
	int T;
	int a, b;

	cin >> T;

	while (T--) {
		cin >> a >> b;
		int data = 1;
		int n = b % 4, m = a % 10;

        if (n == 0) {
			n = 4;
		}
		if (m == 0) {
			cout << 10 << "\n";
			continue;
		}

		for (int i = 0; i < n; i++) {
			data *= m;
		}
		cout << data % 10 << "\n";
	}
	return 0;
}