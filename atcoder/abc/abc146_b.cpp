/* B - ROT N */

#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        c = c + n;
        if (c >= 'A' && c <= 'Z') {
            s[i] = c;
        } else {
            int mod = c - 'Z';
            s[i] = 'A' + mod - 1;
        }
    }
    cout << s << endl;
    return 0;
}