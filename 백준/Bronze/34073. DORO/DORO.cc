#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {
    int n;
    cin >> n;
    vector<string> doro(n);
    
    for (int i = 0; i < n; i++) {
        cin >> doro[i];
        doro[i] += "DORO";
    }
    
    for (int i = 0; i < n; i++)
        cout << doro[i] << " ";

    return 0;
}