/* 11/22String */

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    if (n % 2 == 0) {
        cout << "No" << endl;
        return 0;
    }
    for (int i = 0; i < (n + 1) / 2 - 1; i++) {
        if (str[i] != '1') {
            cout << "No" << endl;
            return 0;
        }
    }
    if (str[(n + 1) / 2 - 1] != '/') {
        cout << "No" << endl;
        return 0;
    }
    for (int i = (n + 1) / 2 ; i < n; i++) {
        if (str[i] != '2') {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;

}