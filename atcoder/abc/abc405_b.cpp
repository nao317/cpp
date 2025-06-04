/* B - Not All */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    vector<int> vec;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        vec.push_back(num);
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        vec.pop_back();
        for (int j = 1; j <= m; j++) {
            if (find(vec.begin(), vec.end(), j)) {
                count++;
                continue;
            } else {
                break;
            }
        }
    }
    cout << count << endl;
    return 0;
}