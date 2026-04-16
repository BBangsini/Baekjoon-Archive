#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int M, N, res = 0;
int box[1001][1001];
int days[1001][1001];
int dx[] = { 1, -1, 0, 0 };
int dy[] = { 0, 0, 1, -1 };
queue<pair<int, int>> q;

void bfs() {
    while (!q.empty()) {
        pair<int, int> cur = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];

            if (nx < 0 || nx >= N || ny < 0 || ny >= M)
                continue;

            if (box[nx][ny] == 0 && days[nx][ny] == -1) {
                days[nx][ny] = days[cur.first][cur.second] + 1;
                q.push({ nx, ny });
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> M >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> box[i][j];
            days[i][j] = -1;

            if (box[i][j] == 1) {
                q.push({ i, j });
                days[i][j] = 0;
            }
        }
    }

    bfs();

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (box[i][j] == 0 && days[i][j] == -1) {
                cout << -1 << "\n";
                return 0;
            }
            res = max(res, days[i][j]);
        }
    }

    cout << res << "\n";

    return 0;
}