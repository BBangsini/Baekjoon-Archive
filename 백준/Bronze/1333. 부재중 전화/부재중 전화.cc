#include <iostream>
using namespace std;

int main() {
    int n, l, d;
    cin >> n >> l >> d;

    int end = 0;
    int time = d;

    l += 5;
    
    for (int i = 0; i < n; i++) {
        end += l;
        while (true) {
            if (time < end - 5) 
                time += d;

            else 
                break;
        }

        if (end - 5 <= time && time < end) 
            break;
    }
    cout << time;
}