#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n = 5;

    vector<int> list(5);

    int count = 0;

    for (int i = 0; i < n; i++) {
        cin >> list[i];
    }
    for (int i = 1; i < n; i++) {
        if (list[i-1] > list[i]) {
            int empty = list[i-1];
            list[i-1] = list[i];
            list[i] = empty;
            count++;
        }
    }

    bool boolean = true;

    for (int i = 1; i < n; i++) {
        if (list[i-1] > list[i]) {
            boolean = false;
        }
    }

    if (count == 1 && boolean == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;

}