/* */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    long n, m;
    cin >> n >> m;
    vector<long long> vec1(n);
    vector<long long> vec2(m);
    for (long i = 0; i < n; i++) {
        cin >> vec1[i];
    }
    for (long i = 0; i < m; i++) {
        cin >> vec2[i];
    }
    sort(vec1.begin(), vec1.end(), greater<long long>());
    sort(vec2.begin(), vec2.end(), greater<long long>());
    long limit1 = n;
    long limit2;
    if (n < m) {
        limit2 = n - 1;
    } else {
        limit2 = m;
    }
    long long sum1 = 0;
    long long sum2 = 0;
    for (long i = 0; i < limit1; i++) {
        if (vec1[i] > 0) {
            sum1 += vec1[i];
        }
    }
    for (long i = 0; i < limit2; i++) {
        if (vec2[i] > 0) {
            sum2 += vec2[i];
        }
    }

    cout << sum1 + sum2 << endl;

    return 0;

}