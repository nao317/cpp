// Chokudai Speed Run

/* C - 和の最大値α*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        vec.push_back(a + b);
    }
    auto max = max_element(vec.begin(), vec.end());
    cout << *max << endl;
    return 0;
}