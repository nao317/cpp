/*  */

#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    bool frag = false;
    for (int i = 2; i < n; i++) {
        if (vec[i] == vec[i-1] && vec[i] == vec[i-2]) {
            frag = true;
            break;
        }
    }
    if (frag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}