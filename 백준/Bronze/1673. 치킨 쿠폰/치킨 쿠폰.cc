#include<iostream>
using namespace std;

int main() {
    int n, k;
    int chicken;
    int new_chicken;
    
    while (cin >> n >> k) {
        chicken = n;
        int add = n;
    
        while(add >= k) {
            new_chicken = add / k;
            chicken += new_chicken;
            add = add % k + new_chicken;
        }
    cout << chicken << "\n";
    }
    return 0;
}