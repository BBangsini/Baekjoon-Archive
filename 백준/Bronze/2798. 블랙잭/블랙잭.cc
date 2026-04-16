#include <iostream>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	int arr[100] = {};

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int cards;
	int max = 0;

	for (int j = 0; j < N; j++) {
		for (int k = j + 1; k < N; k++) {
			for (int l = k + 1; l < N; l++) {
				cards = arr[j] + arr[k] + arr[l];
				if (cards <= M && max < cards) {
					max = cards;
				}
			}
		}
	}
	cout << max;
	return 0;
}
