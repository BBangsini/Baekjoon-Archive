#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX_NODE 1001
using namespace std;

vector<int> edges[MAX_NODE];
queue<int> bfs_queue;
bool visited[MAX_NODE];

void dfs(int cur) {
	if (visited[cur]) // 이미 방문한 노드인 경우 바로 종료
		return;
	visited[cur] = true; // 방문 했다고 기록

	cout << cur << " ";

	for (auto next : edges[cur])
		dfs(next);
}

void bfs(int start) {
	bfs_queue.push(start);
	visited[start] = true;
	while (!bfs_queue.empty()) {
		int cur = bfs_queue.front();
		bfs_queue.pop();

		cout << cur << " ";

		for (auto next : edges[cur]) {
			if (!visited[next])
				bfs_queue.push(next);
			visited[next] = true;
		}
	}
}
// q.push(1)
// q.push({1,2});
// pair<int,int> cur = q.front();
// cur.first   -> 1
// cur.second  -> 2
// 
// for...
// int ny = cur.first + dy[];
// int nx = cur.second + dx[];
// q.push({ny,nx});
// q.push(make_pair(ny,nx));

int main() {
	int n, m, v;
	cin >> n >> m >> v;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;

		edges[a].push_back(b);
		edges[b].push_back(a);
	}
	for (int i = 1; i <= n; i++) {
		sort(edges[i].begin(), edges[i].end());
	}

	for (int i = 1; i <= n; i++) {
		visited[i] = false;
	}
	dfs(v);
	cout << "\n";

	for (int i = 1; i <= n; i++) {
		visited[i] = false;
	}
	while (!bfs_queue.empty()) bfs_queue.pop();

	bfs(v);
	cout << "\n";

	return 0;
}