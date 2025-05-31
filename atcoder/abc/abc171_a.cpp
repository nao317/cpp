/* A - alphabet */

#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    char c;
    cin >> c;
    if (c >= 'A' && c <= 'Z') {
        cout << "A" << endl;
    } else if (c >= 'a' && c <= 'z') {
        cout << "a" << endl;
    }
    return 0;
}