#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, res = 0;
	string num;

	cin >> n >> num;

	for (int i = 0; i < n; i++) {
		res += (num[i] - '0');
	}

	cout << res;
	
	return 0;
}