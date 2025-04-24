/* A - First ABC */

#include <iostream>

using namespace std;

void judge (char s, bool &a, bool &b, bool &c) {
    if (s == 'A') {
        a = true;
    } else if (s == 'B') {
        b = true;
    } else if (s == 'C') {
        c = true;
    }
}

void terminal (int index) {
    cout << index + 1 << endl;
    exit(0);
}

int main (void) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool a = false, b = false, c = false;
    for (int i = 0; i < s.length(); i++) {
        judge(s[i], a, b, c);
        if (a && b && c) {
            terminal(i);   
        }
    }
    return 0;
}