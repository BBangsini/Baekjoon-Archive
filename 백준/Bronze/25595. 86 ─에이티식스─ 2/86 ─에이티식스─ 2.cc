#include <iostream>

using namespace std;

int n, sx, sy, legion_cnt = 0, kill_cnt = 0;
int map[101][101];
bool visited[101][101];
bool kill[101][101];
int dx[4] = {-1, -1, 1, 1};
int dy[4] = { -1, 1, -1, 1 };

void dfs(int x, int y) {
	visited[x][y] = true;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx > n || ny < 0 || ny > n) continue;

		if (map[x][ny] == 1) kill[x][ny] = true;
		if (map[nx][y] == 1) kill[nx][y] = true;

		if (!visited[nx][ny])
			dfs(nx, ny);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
			if (map[i][j] == 2) {
				sx = i;
				sy = j;
			}

			else if (map[i][j] == 1) {
				legion_cnt++;
			}
		}
	}

	dfs(sx, sy);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (kill[i][j])
				kill_cnt++;
		}
	}

	if (kill_cnt == legion_cnt)
		cout << "Lena" << "\n";
	else
		cout << "Kiriya" << "\n";

	return 0;
}