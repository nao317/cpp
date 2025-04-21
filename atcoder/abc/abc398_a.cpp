/* A -  Doors in the Center */

#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int status = n / 2;
    int flag = n % 2;
    for (int i= 1; i <= n; i++) {
        if (i == status || i == status + flag) {
            cout << "=";
        } else {
            cout << "-";
        }
    }
    cout << endl;
    return 0;
}