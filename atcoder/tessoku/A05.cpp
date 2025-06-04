/* A05 - Three Cards */

#include <iostream>

using namespace std;

int main(void) {
    int n, k;
    cin >> n >> k;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int z = k - i - j;
            if (z >= 1 && z <= n) count++;
        }
    }
    cout << count << endl;
    return 0;
}