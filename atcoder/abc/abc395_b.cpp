/* abc395_b.cpp */

#include <iostream>
#include <vector>

using namespace std;

string init (int n) {
    string generator = "";
    for (int i = 0; i < n; i++) {
        generator += "#";
    }
    return generator;
}

int main(void) {
    int n;
    cin >> n;
    vector<string> vec(n);
    string initial = init(n);
    for (int i = 0; i < n; i++) {
        vec[i] = initial;
    }

    for (int k = 0; k < n; k++) {
        if (k < n - k - 1) {
            for (int i = k; i < n - k; i++) {
                for (int j = k; j < n - k; j++) {
                    if (i % 2 == 0) {
                        vec[i][j] = '#';
                    } else {
                        vec[i][j] = '.';
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << vec[i] << endl;
    }
    return 0;
}