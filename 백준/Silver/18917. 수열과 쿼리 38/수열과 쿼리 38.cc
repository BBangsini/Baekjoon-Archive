#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int m;
	long long sum = 0, xorSum = 0;
	cin >> m;

	while (m--) {
		int query;
		cin >> query;

		if (query == 1) {
			int x;
			cin >> x;
			sum += x;
			xorSum ^= x;
		}

		else if (query == 2) {
			int x;
			cin >> x;
			sum -= x;
			xorSum ^= x;
		}

		else if (query == 3)
			cout << sum << "\n";

		else if (query == 4)
			cout << xorSum << "\n";
	}

	return 0;
}