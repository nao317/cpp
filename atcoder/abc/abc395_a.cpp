/* abc395_a.cpp */

#include <iostream>
#include <vector>
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
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    for (int i = 1; i < n; i++) {
        if (vec[i] > vec[i - 1]) {
            continue;
        } else {
            say_no();
        }
    }
    say_yes();
}