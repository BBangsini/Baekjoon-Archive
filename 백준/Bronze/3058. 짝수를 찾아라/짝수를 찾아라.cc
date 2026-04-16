#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int arr[7] = {};
        int add = 0, min = 100;
        
        for (int i = 0; i < 7; i++) {
            cin >> arr[i];
            if (arr[i] % 2 == 0) {
                add += arr[i];
                if (min > arr[i]) 
                    min = arr[i];
            }
        }
        cout << add << " " << min << "\n";
    }
    return 0;
}