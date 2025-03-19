/* A - Thermometer */

#include <iostream>

using namespace std;

int main(void) {
    double x;
    cin >> x;
    if (x < 37.5) {
        cout << 3 << endl;
    } else if (x >= 37.5 && x < 38.0) {
        cout << 2 << endl;
    } else {
        cout << 1 << endl;
    }

    return 0;

}