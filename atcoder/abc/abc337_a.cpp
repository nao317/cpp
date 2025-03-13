/* A - Scoreboard */

#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int x = 0, y = 0;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        x += a;
        y += b;
    }

    if (x > y) {
        cout << "Takahashi" << endl;
    } else if (x < y) {
        cout << "Aoki" << endl;
    } else {
        cout << "Draw" << endl;
    }
    return 0;
}