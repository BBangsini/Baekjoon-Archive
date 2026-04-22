#include <iostream>
#include <string>

using namespace std;

int main () {
    int k, h, ans;
    string s;
    
    cin >> k;
    
    for (int j = 1; j <= k; j++) {
        cin >> h >> s;
        ans = h;
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'b')
                ans--;
            else if (s[i] == 'c')
                ans++;
        }
        
        cout << "Data Set " << j << ":\n" << ans << "\n\n";
    }
    
    return 0;
}