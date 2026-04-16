#include <iostream>
#include <algorithm>
using namespace std;

int n;
int map[101][101];
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };
int maxi = 0;
bool is_visit[101][101];


void init() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
			maxi = max(maxi, map[i][j]);
		}
	}
}

bool is_valid(int y, int x) {
	if (y < 0 || y >= n)
		return false;

	if (x < 0 || x >= n)
		return false;

	return true;
}

void dfs(int y, int x, int rain) {
	is_visit[y][x] = true;
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (!is_valid(ny, nx))
			continue;

		if ((!is_visit[ny][nx]) && map[ny][nx] > rain) {
			dfs(ny, nx, rain);
		}
	}
}

void solve() {
	int a = 1;

	for (int rain = 0; rain < maxi; rain++) {
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				is_visit[i][j] = false;
			}
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if ((!is_visit[i][j] && map[i][j] > rain)) {
					dfs(i, j, rain);
					cnt++;
				}
			}
		}
		a = max(a, cnt);
	}
	cout << a;
}

int main() {
	init();
	solve();
	return 0;
}