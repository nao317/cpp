/* A - テスト */

#include <iostream>

using namespace std;

int main(void) {
    int x, y;
    cin >> x >> y;
    if (x > y) {
        cout << "Worse" << endl;
    } else {
        cout << "Better" << endl;
    }
    return 0;
}