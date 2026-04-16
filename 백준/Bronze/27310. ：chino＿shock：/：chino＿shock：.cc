#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int ans = 0;
	string chino;
	cin >> chino;

	for (int i = 0; i < chino.length(); i++) {
		if (chino[i] == '_')
			ans += 6;
		else if (chino[i] == ':')
			ans += 2;
		else
			ans++;
	}

	cout << ans;

	return 0;
}