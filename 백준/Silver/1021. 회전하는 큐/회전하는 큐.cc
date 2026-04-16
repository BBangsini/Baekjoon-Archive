#include <iostream> 
#include <queue>
using namespace std;
int main() {
	int n, m, result = 0;
	cin >> n >> m;
	queue <int> q;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	while (m--) {
		int cnt = 0, fnd;
		cin >> fnd;
		while (!q.empty() && fnd != q.front()) {
			q.push(q.front());
			q.pop();
			cnt++;
		}
		result += min(cnt, int (q.size() - cnt));
		q.pop();
	}
	cout << result;
}