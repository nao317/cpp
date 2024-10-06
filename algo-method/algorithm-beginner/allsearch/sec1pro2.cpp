#include <bits/stdc++.h>

using namespace std;

int main () {

    int n, v;
    cin >> n >> v;
    vector<int> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int count = 0;

    for (int j = 0; j < n; j++) {
        if (vec[j] == v) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}