/* C - Not All Covered */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    vector<long long> vec(n + 1, 0);
    for (int i = 0; i < m; i++) {
        int L, R;
        cin >> L >> R;
        vec[L - 1] = vec[L - 1] + 1;
        vec[R] = vec[R] - 1;
    }

    for (int i = 1; i < n; i++) {
        vec[i] = vec[i] + vec[i - 1];
    }

    vec.pop_back();

    auto iterator = min_element(vec.begin(), vec.end());
    long long index = distance(vec.begin(), iterator);
    cout << vec[index] << endl;
    return 0;
}