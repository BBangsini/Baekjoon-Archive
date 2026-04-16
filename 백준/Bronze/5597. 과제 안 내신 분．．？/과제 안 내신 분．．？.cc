#include <iostream>
using namespace std;

int main() {
	int arr[28];  // 입력배열
	int answer[31] = {}; // 불린사람 1 안불린사람 0

	for (int i = 0; i < 28; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < 28; i++) {
		int current = arr[i];
		answer[current] = 1;
	}

	for (int i = 1; i <= 30; i++) {
		if (answer[i] == 0) {
			cout << i << "\n";
		}
	}
}