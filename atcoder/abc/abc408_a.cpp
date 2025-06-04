/* A - */

#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int n;
    double s;
    cin >> n >> s;
    vector<int> time;
    time.push_back(0);
    s = s + 0.5;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        time.push_back(t);
    }
    for (int i = 1; i < n + 1; i++) {
        double diff = time[i] - time[i - 1];
        if (s <= diff) {
            cout << "No" << endl;
            exit(0);
        }
    }
    cout << "Yes" << endl;
    return 0;
}