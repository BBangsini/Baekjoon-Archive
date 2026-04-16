#include <iostream>
using namespace std;

int main () {
    while (true) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) break;

        int max = a;
        if (max < b) max = b;
        if (max < c) max = c;

        if (max == a) {
            if (a*a == b*b + c*c)
                cout << "right" << "\n";
            else 
                cout << "wrong" << "\n";
        }

        else if (max == b) {
            if (b*b == a*a + c*c)
                cout << "right" << "\n";
            else 
                cout << "wrong" << "\n";
        }

        else {
            if (c*c == b*b + a*a)
                cout << "right" << "\n";
            else 
                cout << "wrong" << "\n";
        }
    }


    return 0;
}