// Rearranging ABC

#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;
    bool flag = false;
    if (s.find("A") != string::npos && s.find("B") != string::npos && s.find("C") != string::npos) {
        flag = true;
    }
    if (flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}