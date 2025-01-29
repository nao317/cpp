#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> list(n);
    for (int i = 0; i < n; i++) {
        cin >> list[i];
    }
    const double epsilon = 1e-9;
    vector<double> time(n-1);
    bool boolean = true;
    for (int i = 1; i < n; i++) {
        double div = list[i] / (double)list[i-1];
        time[i-1] = div;
    }
    double init = list[1] / (double)list[0];
    for (int i = 0; i < n-1; i++) {
        if (abs(time[i] - init) > epsilon) {
            boolean = false;
            break;
        }
    }
    if (boolean) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;

}