#include <bits/stdc++.h>
using namespace std;

int main () {
    int h;
    cin >> h;
    int timestwo = 1;
    int days = 1;
    int sum = 1;
    while (sum <= h) {
        timestwo = timestwo * 2;
        sum = sum + timestwo;
        days++;
    }

    cout << days << endl;

    return 0;
}