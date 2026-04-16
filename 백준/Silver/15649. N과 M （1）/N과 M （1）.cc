#include <iostream>
using namespace std;

int n, m;
int arr[10];
bool visited[10];

void dfs(int dep) {
	if (dep == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			visited[i] = true;
			arr[dep] = i;
			dfs(dep + 1);
			visited[i] = false;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m;
	dfs(0);

	return 0;
}