#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            int roomnum = i * 100 + j;
            sum = sum + roomnum;
        }
    }

    cout << sum << endl;

    return 0;
}