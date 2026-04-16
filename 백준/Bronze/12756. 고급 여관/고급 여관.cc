#include <iostream>
using namespace std;

int main() {
    int a_ak, a_hp, b_ak, b_hp;
    cin >> a_ak >> a_hp >> b_ak >> b_hp;

    while (true) {
        a_hp -= b_ak;
        b_hp -= a_ak;

        if (a_hp <= 0 && b_hp <= 0) {
            cout << "DRAW";
            break;
        }
        else if (a_hp <= 0) {
            cout << "PLAYER B";
            break;
        }
        else if (b_hp <= 0) {
            cout << "PLAYER A";
            break;
        }
    }
    return 0;
}