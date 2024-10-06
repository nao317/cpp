#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<long long> a(n);
    vector<long long> b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    long long amax = *max_element(a.begin(), a.end());
    long long bmax = *max_element(b.begin(), b.end());

    long long result = amax + bmax;


    cout << result << endl;

    return 0;
}