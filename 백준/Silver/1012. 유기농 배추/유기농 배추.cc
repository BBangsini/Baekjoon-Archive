#include <iostream>
using namespace std;

int t, m, n, k, x, y, res = 0;
int arr[51][51];
bool visited[51][51];
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };

void dfs(int x, int y) {
	visited[x][y] = true;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || ny < 0 || nx >= m || ny >= n)
			continue;
		
		if (arr[nx][ny] == 1 && !visited[nx][ny]) {
			dfs(nx, ny);
		}
	}
}

int main() {
	cin >> t;
	while (t--) {
		cin >> m >> n >> k;

		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				arr[i][j] = visited[i][j] = 0;

		for (int i = 0; i < k; i++) {
			cin >> x >> y;
			arr[x][y] = 1;
		}

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (arr[i][j] && !visited[i][j] == 1) {
					dfs(i, j);
					res++;
				}
			}
		}

		cout << res << "\n";
		res = 0;
	}

	return 0;
}