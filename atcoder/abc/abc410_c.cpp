/* C - Rotatable Array */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    long n, q;
    cin >> n >> q;
    vector<long> vec(n);
    for (int i = 0; i < n; i++) {
        vec[i] = i + 1;
    }

    long slide = 0;
    for (long i = 0; i < q; i++) {
        long query;
        cin >> query;
        if (query == 1) {
            long index;
            cin >> index;
            long x;
            cin >> x;
            long actualindex = (slide + index - 1) % n;
            vec[actualindex] = x;
        } else if (query == 2) {
            long index;
            cin >> index;
            long actualindex = (slide + index - 1) % n;
            cout << vec[actualindex] << endl;
        } else {
            long k;
            cin >> k;
            slide = (slide + k) % n;
        }
    }
    return 0;
}