// マスの移動（１）

#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> vec(n);
    vector<int> count(n);

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    count[0] = 0;
    count[1] = vec[1];
    
    for (int i = 2; i < n; i++) {
        count[i] = min(count[i-1] + vec[i], count[i-2] + vec[i] * 2);
    }

    cout << count[n-1] << endl;

    return 0;
}