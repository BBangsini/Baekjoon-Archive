#include <iostream>
using namespace std;

int main () {
    char s[101];
    cin >> s;

    for (int i = 0; s[i]; i++) {
        if ('A' <= s[i] && s[i] < 'Z')
            s[i] += 32;
        else s[i] -= 32;
    }
    
    cout << s;
    
    return 0;
}