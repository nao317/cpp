/* A02 - Linear Search */

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
    int n, x;
    cin >> n >> x;
    vector<int> vec;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        vec.push_back(num);
    }
    for (int i = 0; i < n; i++) {
        if (vec[i] == x) {
            say_yes();
        }
    }
    say_no();
    return 0;
}