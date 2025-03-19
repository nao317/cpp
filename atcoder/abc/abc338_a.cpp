/* A - Capitalized */

#include <iostream>
#include <cctype>

using namespace std;

void say_yes() {
    cout << "Yes" << endl;
    exit(0);
}
void say_no() {
    cout << "No" << endl;
    exit(0);
}
int main(void) {
    string str;
    cin >> str;
    if (islower(str[0])) {
        say_no();
    }
    for (int i = 1; i < str.length(); i++) {
        if (isupper(str[i])) {
            say_no();
        }
    }
    say_yes();    
}