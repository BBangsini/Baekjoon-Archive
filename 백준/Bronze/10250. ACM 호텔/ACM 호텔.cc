#include <iostream>

using namespace std;

int main () {
    int t;
    cin >> t;
    
    while (t--) {
        int h, w, n;
        cin >> h >> w >> n;
        
        int cur_h = 1, cur_w = 1, cnt = 1;
        
        while (cnt <= n) {
            if (cnt == n) break;
            
            if (cur_h < h)
                cur_h++;
            else {
                cur_h = 1;
                cur_w++;
            }
            cnt++;
        }
    
    cout << cur_h;
    
    if (cur_w < 10)
        cout << "0" << cur_w << "\n";
    else 
        cout << cur_w << "\n";
    }
    
    return 0;
}