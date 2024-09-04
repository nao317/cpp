// Buy a Pen

#include <bits/stdc++.h>

using namespace std;

int main () {

    int R, G, B;
    string C;
    cin >> R >> G >> B >> C;

    if (C == "Red") {
        if (G > B) {
            cout << B << endl;
        } else {
            cout << G << endl;
        }
    } else if (C == "Green") {
        if (R > B) {
            cout << B << endl;
        } else {
            cout << R << endl;
        }
    } else {
        if (R > G) {
            cout << G << endl;
        } else {
            cout << R << endl;
        }
    }

    return 0;
    
}