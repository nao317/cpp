/* 大文字小文字判定 */

#include <iostream>

using namespace std;

int main(void) {

    char c;
    cin >> c;

    if (isupper(c)) {
        cout << "upper" << endl;
    }
    if (islower(c)) {
        cout << "lower" << endl;
    }
    return 0;
}