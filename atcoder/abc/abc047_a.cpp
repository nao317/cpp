/* キャンディーと2人の子ども */

#include <iostream>
#include <vector>
#include <algorithm>
#define n 3
using namespace std;

int main(void) {
    vector<int> candy;
    for (int i = 0; i < n; i++) {
        int pack;
        cin >> pack;
        candy.push_back(pack);
    }
    sort(candy.begin(), candy.end());
    int a = candy[0] + candy[1];
    int b = candy[2];
    if (a == b) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}