#include <iostream>
using namespace std;

char map[401][401];

void star(int n, int x) {
	if (n < 1) return;

	int size = 4 * n - 3;
	for (int i = 0; i < size; i++) {
		map[x][x + i] = '*';
		map[x + size - 1][x + i] = '*';
		map[x + i][x] = '*';
		map[x + i][x + size - 1] = '*';
	}

	star(n - 1, x + 2);
}

int main() {
	int n;
	cin >> n;

	int size = 4 * n - 3;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			map[i][j] = ' ';
		}
	}

	star(n, 0);

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << map[i][j];
		}
		cout << "\n";
	}

	return 0;
}