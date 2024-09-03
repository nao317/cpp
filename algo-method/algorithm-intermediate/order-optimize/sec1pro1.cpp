#include <bits/stdc++.h>

using namespace std;

int main () {
    long n;
    cin >> n;

    vector<long> vec(n);

    for (long k = 0; k < n; k++) {
        cin >> vec[k];
    }

    for (long i = 0; i < n-1; i++) {
        for (long j = i+1; j < n; j++) {
            if (vec[i] > vec[j]) {
                long empty = vec[i];
                vec[i] = vec[j];
                vec[j] = empty;
            }
        }
    }

    long maximum = vec[n-1] - vec[0];

    cout << maximum << endl;

    return 0;

}