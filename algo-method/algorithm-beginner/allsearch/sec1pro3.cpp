#include <bits/stdc++.h>

using namespace std;

int main () {

    int n, v;

    cin >> n >> v;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int index = 0;
    for (int j = n-1; j >= 0; j--) {
        if (vec[j] == v) {
            index = j;
            break;
        } else {
            index = -1;
        }
    }

    cout << index << endl;

    return 0;
    
}