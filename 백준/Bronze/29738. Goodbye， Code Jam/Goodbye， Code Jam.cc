#include <iostream>

using namespace std;

int main () {
    int t;
    cin >> t;
    for (int  i = 1; i <= t; i++) {
        int n;
        cin >> n;
        
        if (n <= 25) {
            cout << "Case #" << i << ": " << "World Finals" << "\n";
        }
        
        else if (n > 25 && n <= 1000) {
            cout << "Case #" << i << ": " << "Round 3" << "\n";
        }
        
        else if (n > 1000 && n <= 4500) {
            cout << "Case #" << i << ": " << "Round 2" << "\n";
        }
        
        else {
            cout << "Case #" << i << ": " << "Round 1" << "\n";
        }
    }
    
    return 0;
}