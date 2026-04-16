#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int n, cut;
	double res, sum = 0;
	cin >> n;

	if (n == 0) {
		cout << 0 << "\n";
		return 0;
	}

	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());
	
	cut = round(n * 0.15);

	for (int i = cut; i < n - cut; i++) {
		sum += v[i];
	}

	res = round(sum / (n - (cut * 2)));
	cout << res << "\n";

	return 0;
}