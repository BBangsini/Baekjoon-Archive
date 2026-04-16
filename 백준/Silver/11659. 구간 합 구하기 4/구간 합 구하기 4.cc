#include <iostream>
#define MAX_N 100001
using namespace std;

int sum[100001];
int arr[100001];
int N, M;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    cin >> N >> M;
	sum[0] = 0; // 초기화 필수 !!
	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
		sum[i] = sum[i - 1] + arr[i];  // sum[i - 1] = arr[1] ... arr[i - 1]
	}
	while (M--) {
		int left, rigth;
		cin >> left >> rigth;
		cout << sum[rigth] - sum[left - 1] << "\n";  // [l, r] 구간 구하기 -> sum[r] - sum[l - 1]
	}
	return 0;
}