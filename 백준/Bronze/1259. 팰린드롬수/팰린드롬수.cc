#include <iostream>
#include <string>

using namespace std;

string s;

bool solved (string s) {
    for (int i = 0; i < s.length() / 2; i++) {
        if (s[i] != s[s.length() - i - 1])
            return false;
    }
    return true;
}

int main () {
    while (true) {
        cin >> s;
        
        if (s == "0") break;
        
        if (solved(s)) 
            cout << "yes" << "\n";
        else
            cout << "no" << "\n";
    }
    
    return 0;
}