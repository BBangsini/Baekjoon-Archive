#include <iostream>
using namespace std;

#define MAX 1001

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, cnt = 0;
	int arr[MAX] = {};

	cin >> n;
	
	for (int i = 2; i < MAX; i++) {
		arr[i] = i;
	}

	for (int i = 2; i * i < MAX; i++) {
		if (arr[i] == 0) 
			continue;

		for (int j = i * i; j < MAX; j += i) {
			arr[j] = 0;
		}
	}

	while (n--) {
		int num;
		cin >> num;

		if (arr[num] != 0) {
			cnt++;
		}
	}

	cout << cnt << "\n";

	return 0;
}