#include <iostream>
using namespace std;

int main() {
	int H, W, N, M;
	cin >> H >> W >> N >> M;
	int x, y, result;

	//한 사람이 차지하는 칸 = ((N + 1) , (M + 1))

	x = (H + N) / (N + 1);
	y = (W + M) / (M + 1);
	result = x * y;

	cout << result;
	return 0;
}