/* B - Geometric */

#include <iostream>
#include <vector>

using namespace std;

int main(void) {

    long n, m;
    cin >> n >> m;
    vector<long long> array(m);
    vector<long long> geoser(m);
    array[0] = n;
    geoser[0] = n;
    for (int i = 1; i < m; i++) {
        
        if (array[i - 1] > 1e9 / n) {
            cout << "inf" << endl;
            return 0;
        }
        array[i] = array[i - 1] * n;
        if (geoser[i - 1] > 1e9 - array[i]) {
            cout << "inf" << endl;
            return 0;
        }
        geoser[i] = array[i] + geoser[i - 1];
    }
    // cout << array[m - 1] << endl;
    if (geoser[m - 1] + 1 > 1000000000) {
        cout << "inf" << endl;
    } else {
        cout << geoser[m - 1] + 1 << endl;
    }
    return 0;
}