#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, v;
    cin >> n >> v;

    vector<int> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    bool boolean = false;
    for (int j = 0; j < n; j++) {
        if (vec[j] == v) {
            boolean = true;
            break;
        }
    }

    if (boolean) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
    
} 