#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    int q;
    cin >> q;

    for (int j = 0; j < q; j++) {
        int flag;
        cin >> flag;
        if (flag) {
            int v;
            cin >> v;
            vec.push_back(v);
            n++;
        } else {
            int k;
            cin >> k;
            if (k <= n-1) {
                cout << vec[k] << endl;
            } else {
                cout << "Error" << endl;
            }
        }
    }

    return 0;

}