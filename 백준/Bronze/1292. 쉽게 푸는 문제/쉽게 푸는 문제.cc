#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int sum = 0;      // 결과
    int index = 0;    // 수열(n번 째)

    for (int i = 1; index < B; i++) {      // 수열(n번 째의 값)
        for (int j = 0; j < i; j++) {      // 수열 생성
            index++;                        // 수열 위치 증가
            if (index >= A && index <= B) { 
                sum += i;                   
            }
        }
    }

    cout << sum;
    return 0;
}
