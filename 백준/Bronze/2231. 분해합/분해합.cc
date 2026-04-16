#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 1; i < n; i++) {
		int tep = i;
		int sum = i;

		while (tep != 0) {
			sum += tep % 10;
			tep /= 10;
		}

		if (sum == n) {
			cout << i << "\n";
			return 0;
		}
	}

	cout << 0 << "\n";
	return 0;
}