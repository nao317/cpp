#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    string str1, str2;
    cin >> str1 >> str2;
    int length1 = str1.length();
    int length2 = str2.length();
    for (int i = 0; i < length1 + length2; i++) {
        if (i % 2 == 0) {
            cout << str1[i / 2];
        } else {
            cout << str2[i / 2];
        }
    }
    cout << endl;
    return 0;
}