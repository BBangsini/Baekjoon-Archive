#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<string> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	int len = v[0].length();
	
	for (int i = 0; i < len; i++) {
		bool isSame = true;
		
		for (int j = 0; j < n; j++) {
			if (v[j][i] != v[0][i]) {
				isSame = false; 
			}
		}

		if (isSame)
			cout << v[0][i];
		else
			cout << "?";
	}

	return 0;
}