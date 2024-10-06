#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int a = 0; a < n; a++) {
        cin >> vec[a];
    }
    
    for (int l = 0; l < n; l++) {
        bool flag = false;
        for (int i = 0; i < n-1; i++) {
            
            if (vec[i] > vec[i+1]) {
                swap(vec[i],vec[i+1]);
                flag = true;
            }
        }

        if (flag) {
            for (int k = 0; k < n-1; k++) {
                cout << vec[k] << " ";
            }
            cout << vec[n-1] << endl;
        }
    }
    
    return 0;

}