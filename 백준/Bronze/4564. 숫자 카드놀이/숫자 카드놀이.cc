#include <iostream>
#include <string>
using namespace std;

int main () {
    string s;
    
    while (true) {
        cin >> s;

        if (s == "0") break;

        cout << s << " ";

        while (s.length() > 1) {
            int res = 1;

            for (int i = 0; i < s.length(); i++) {
                res *= (s[i] - '0');
            }
            cout << res << " ";

            s = to_string(res);
        }
        cout << "\n";
    }
    
    return 0;
}