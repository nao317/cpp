/* A - */

#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            cout << s[i];
        }
    }
    cout << endl;
    return 0;
}