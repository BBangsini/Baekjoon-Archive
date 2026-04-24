#include <iostream>
#include <string>

using namespace std;

bool solved (string s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != s[s.length() - i - 1]) return false;
    }
    
    return true;
}

int main () {
    string s;
    cin >> s;
    
    if (solved(s))
        cout << 1 << "\n";
    else
        cout << 0 << "\n";
    
    return 0;
}