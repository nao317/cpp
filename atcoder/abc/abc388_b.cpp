/* B - Heavy Snake */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int n, d;
    cin >> n >> d;
    vector<int> thick;
    vector<int> length;
    for (int i = 0; i < n; i++) {
        int t, l;
        cin >> t >> l;
        thick.push_back(t);
        length.push_back(l);
    }

    for (int i = 0; i < d; i++) {
        vector<int> box;
        for (int j = 1; j <= n; j++) {
            box.push_back(thick[j - 1] * (length[j - 1] + j));
        }
        cout << *max_element(box.begin(), box.end()) << endl;;
    }

    return 0;

}