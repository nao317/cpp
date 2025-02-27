/* A - テレビ */

#include <iostream>

using namespace std;

int main(void) {
    int w, h;
    cin >> w >> h;
    int j = 0;
    if (w > h) {
        j = w;
    } else {
        j = h;
    }
    int n = 0;
    for (int i = j; i >= 1; i--) {
        if (w % i == 0 && h % i == 0) {
            n = i;
            break;
        }
    }
    cout << w / n << ":" << h / n << endl;
    return 0;
}