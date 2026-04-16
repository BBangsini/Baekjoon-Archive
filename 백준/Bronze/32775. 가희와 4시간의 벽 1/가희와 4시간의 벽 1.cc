#include <iostream>

using namespace std;

int main () {
    int s, f;
    cin >> s >> f;
    
    if (f < s)
        cout << "flight" << "\n";
    else
        cout << "high speed rail" << "\n";
    
    return 0;
}