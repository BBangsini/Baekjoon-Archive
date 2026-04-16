#include <iostream>
using namespace std;

void draw(int x, int y, int n) {
    if (n == 1) {
        cout << "*";
        return;
    }
    if ((x / (n / 3)) % 3 == 1 && (y / (n / 3)) % 3 == 1) {
        cout << " ";
    } 
    else {
        draw(x, y, n / 3);
    }
}

int star(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            draw(i, j, n);
        }
        cout << "\n";
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    star(n);
    return 0;
}