/* A - */

#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    int k;
    cin >> k;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (k <= vec[i]) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}