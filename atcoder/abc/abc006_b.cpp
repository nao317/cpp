/* B - トリボナッチ数列 */

#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<long long> vec(n);
    vec[0] = 0;
    vec[1] = 0;
    vec[2] = 1;
    for (long i = 3; i < n; i++) {
        vec[i] = (vec[i - 1] + vec[i - 2] + vec[i - 3]) % 10007;
    }
    cout << vec[n - 1] << endl;
    return 0;
}