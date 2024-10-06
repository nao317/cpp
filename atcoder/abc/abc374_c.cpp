//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a, b;
    a = n / 2;
    b = a;
    if (n % 2 != 0) {
        a += n % 2;
    }

    vector<int> k(n);
    vector<int> vec1(a);
    vector<int> vec2(b);

    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }

    for (int i = 0; i < n-1; i++) {
        if (i % 2 = 0 || i == 0) {
            cin >> vec1[i];
        } else {
            cin >> vec2[i];
        }
    }
}