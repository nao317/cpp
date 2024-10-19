// Glutton Takahashi

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> taste(n, 0);

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;

        if (str == "sweet") {
            taste[i] = 1;
        } else {
            taste[i] = 0;
        }
    }

    for (int i = 1; i < n; i++) {
        int latter = taste[i];
        int now = taste[i-1];
        if (latter == now && now == 1 && i != n - 1) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}