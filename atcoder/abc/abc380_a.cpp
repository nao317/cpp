/* A - 123233 */

#include <iostream>

using namespace std;

void say_yes() {
    cout << "Yes" << endl;
    exit(0);
}
void say_no() {
    cout << "No" << endl;
    exit(0);
}
int main() {
    int n;
    cin >> n;
    string str = to_string(n);
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    for (int i = 0; i < size(str); i++) {
        if (str[i] == '1') {
            count1++;
        } else if (str[i] == '2') {
            count2++;
        } else if (str[i] == '3') {
            count3++;
        }
        if (count1 > 1 || count2 > 2 || count3 > 3) {
            say_no();
        }
    }
    if (count1 == 1 && count2 == 2 && count3 == 3) {
        say_yes();
    }
    say_no();
    return 0;
}