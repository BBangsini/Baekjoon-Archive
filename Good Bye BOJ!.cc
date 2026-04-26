/* A번 - Good Bye, 별 찍기! */
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 1; i <= 2 * n; i++) {
		int  cnt= 0;
		for (int j = 0; j < 2 * n - i; j++) {
			cout << " ";
			cnt++;
		}
		cout << "*";
		cnt++;

		if (i <= n) {
			for (int j = 0; j < n; j++) {
				cout << " ";
				cnt++;
			}
		}
		else {
			for (int j = 0; j < 2 * i - n - 1; j++) {
				cout << " ";
				cnt++;
			}
		}
		cout << "*";
		cnt++;

		if (i <= n) {
			for (int j = 0; j < 2 * i - 1; j++) {
				cout << " ";
				cnt++;B
			}
		}
		else {
			for (int j = 0; j < 2 * (2 * n - i) + 1; j++) {
				cout << " ";
				cnt++;
			}
		}
		cout << "*";
		cnt++;

		while (cnt < 4 * n + 2) {
			cout << " ";
			cnt++;
		}

		cout << "\n";
	}

	return 0;
}


/* J번 - Good Bye, BOJ! */
#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	s = "비록 함께한 시간은 1년 조차 되지 않는 짧은 시간이었지만, 덕분에 코딩에 입문해 재미있게 공부할 수 있었어요!! 감사합니다!!\nGood Bye, BOJ!";
	cout << s << "\n";

	return 0;
}