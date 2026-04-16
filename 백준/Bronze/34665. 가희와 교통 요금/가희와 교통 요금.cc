#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio;
	cin.tie(NULL);

	string A, B;
	cin >> A >> B;

	if (A == B) cout << 0;
	else cout << 1550;

	return 0;
}