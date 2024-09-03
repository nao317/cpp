#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    cin >> n;

    vector<int> vec(n);

    for (int k = 0; k < n; k++) {
        cin >> vec[k];
    }

    int min = *min_element(vec.begin(),vec.end());
    int max = *max_element(vec.begin(),vec.end());

    cout << max - min << endl;

    return 0;

}