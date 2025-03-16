/* A - Haiku */

#include <iostream>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ',') {
            str[i] = ' ';
        }
    }
    cout << str << endl;
    return 0;
}