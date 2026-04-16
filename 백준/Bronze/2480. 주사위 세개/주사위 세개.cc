#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int total;
    
    cin >> a >> b >> c;
    
    if (a == b && b == c) {
        total = 10000 + (a * 1000);
    }
    
    else if ((a == b || b == c || c == a) && !(a == b && b == c))  {
        int same_num;
        
        if (a == b) {
            same_num = a;
        } 
        else if (b == c) {
            same_num = b;
        } 
        else {
            same_num = c;
        }
        
        total = 1000 + (same_num * 100);
    }
    
    else {
        int max;
        max = a;
        
        if (b > max) {
            max = b;
        }
        if (c > max) {
            max = c;
        }
        
        total = max * 100;
    }
    
    cout << total;
    return 0;
}