// Raise Both Hands

#include <iostream>

using namespace std;

int main() {

    int l,r;

    cin >> l >> r;

    if (l == 1 && r == 0) {

        cout << "Yes" << endl;

    } else if (l == 0 && r == 1) {

        cout << "No" << endl;

    } else {

        cout << "Invalid" << endl;

    }

    return 0;

}