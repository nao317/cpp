/* Geometric Sequence */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    bool boolean = true;
    vector<long long> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    for (int i = 0; i < n-2; i++) {
        if (vec[i+1] * vec[i+1] != vec[i] * vec[i+2]) {
            boolean = false;
        }
    }

    if (boolean) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}