#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, f;
	cin >> n >> f;

	int res = (n / 100) * 100;

	for (int i = 0; i < 100; i++) {
		if ((res + i) % f == 0) {
			if (i < 10) cout << '0';
			cout << i << "\n";
			break;
		}
	}

	return 0;
}