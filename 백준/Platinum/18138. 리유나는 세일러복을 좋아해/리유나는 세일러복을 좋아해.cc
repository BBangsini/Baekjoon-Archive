#include <iostream>
#include <vector>

using namespace std;

#define MAX 201

int n, m, ans = 0;
int shirt[MAX];
int collar[MAX];
int arr[MAX];
bool visited[MAX];
vector<int> v[MAX];

bool dfs(int i) {
	for (int j : v[i]) {
		if (visited[j])
			continue;
		visited[j] = true;

		if (arr[j] == -1 || dfs(arr[j])) {
			arr[j] = i;
			return true;
		}
	}
	return false;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m;

	for (int i = 0; i < n; i++)
		cin >> shirt[i];

	for (int i = 0; i < m; i++)
		cin >> collar[i];

	for (int i = 0; i < n; i++) {
		int w1 = shirt[i];
		for (int j = 0; j < m; j++) {
			int w2 = collar[j];

			if (w1 <= w2 * 2 && w2 * 4 <= w1 * 3 || w1 <= w2 && w2 * 4 <= w1 * 5)
				v[i].push_back(j);
		}
	}

	for (int i = 0; i < n; i++)
		arr[i] = -1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			visited[j] = false;
		}
		
		if (dfs(i)) 
			ans++;
	}

	cout << ans << "\n";

	return 0;
}