#include <iostream>
using namespace std;

int main() {
	int T, S;
	cin >> T >> S;

	if (12 <= T && T <= 16) {
		if (S == 0) cout << 320;
		else if (S == 1) cout << 280;
	}
	else
		cout << 280;

	return 0;
}