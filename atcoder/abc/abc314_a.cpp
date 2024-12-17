/* 3.14 */

#include <iostream>
using namespace std;

int main() {
    int n;
    string pi = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    cin >> n;
    cout << "3.";
    for (int i = 0; i <= n - 1; i++) {
        cout << pi[i + 2];
    }
    cout << endl;
    return 0;
}