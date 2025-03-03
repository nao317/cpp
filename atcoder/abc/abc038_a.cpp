/* A - お茶 */

#include <iostream>

using namespace std;

int main(void) {
    string s;
    cin >> s;
    int length = s.length();
    if (s[length - 1] != 'T') {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
    return 0;
}