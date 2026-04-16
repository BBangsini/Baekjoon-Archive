#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio;
	cin.tie(NULL);

	int s1, s2, res1 = 0, res2 = 0;
	cin >> s1 >> s2;

	for (int i = 0; i < s1; i++) {
		int sample_test, ans1;
		cin >> sample_test >> ans1;

		if (sample_test != ans1)
			res1++;
	}

	for (int i = 0; i < s2; i++) {
		int system_test, ans2;
		cin >> system_test >> ans2;

		if (system_test != ans2)
			res2++;
	}

		if (res1 > 0)
			cout << "Wrong Answer";
		else if (res1 == 0 && res2 > 0)
			cout << "Why Wrong!!!";
		else
			cout << "Accepted";

		return 0;
	}