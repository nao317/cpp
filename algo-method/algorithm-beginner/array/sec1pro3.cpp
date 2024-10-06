#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    cin >> n ;
    vector<int> vec{3,1,4,1,5,9,2,6,5,3};
    for (int i = 0; i < n; i++) {
        int query, k;
        cin >> query >> k;

        if (query) {
            int v;
            cin >> v;
            vec[k] = v;
        } else {
            cout << vec[k] << endl;
        }
    }

    return 0;
    
}