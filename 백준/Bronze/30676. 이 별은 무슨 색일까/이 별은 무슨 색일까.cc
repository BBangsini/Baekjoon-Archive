#include <iostream>
using namespace std;

int main() {
    int star;
    cin >> star;
    if (star >= 620 && star <= 780) {
        cout << "Red";
    }
    else if (star >= 590 && star < 620) {
        cout << "Orange";
    }
    else if (star >= 570 && star < 590) {
        cout << "Yellow";
    }
    else if (star >= 495 && star < 570) {
        cout << "Green";
    }
    else if (star >= 450 && star < 495) {
        cout << "Blue";
    }
    else if (star >= 425 && star < 450) {
        cout << "Indigo";
    }
    else if (star >= 380 && star < 425) {
        cout << "Violet";
    }
    
    return 0;
}