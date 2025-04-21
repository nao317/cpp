/* A - Doors in the Center */

#include <iostream>

using namespace std;

int main(void) {

    int n;
    cin >> n;

    // ここでは偶数判定をする
    int flag = n % 2;

    // 中間地点
    int center = n / 2;

    for (int i = 1; i <= n; i++) {
        if (flag == 0) {
            if (center == i || center + 1 == i) {
                cout << "=";
                continue;
            }
            cout << "-";
        } else {
            if (center + 1 == i) {
                cout << "=";
                continue;
            }
            cout << "-";
        }
    }
    cout << endl;
    return 0;
}