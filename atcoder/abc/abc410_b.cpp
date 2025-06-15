/* B - Reverse Proxy */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    int n, q;
    cin >> n >> q;
    vector<int> vec(q);
    for (int i = 0; i < q; i++) {
        cin >> vec[i];
    }
    vector<int> b(n, 0);
    for (int i = 0; i < q; i++) {
        int min_val = *min_element(b.begin(), b.end());
        if (vec[i] == 0) {
            for (int j = 0; j < n; j++) {
                if (b[j] == min_val) {
                    b[j]++;
                    cout << j + 1 << " ";
                    break;
                }
            }
        } else {
            b[vec[i] - 1]++;
            cout << vec[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
