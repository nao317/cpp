
#include <iostream>
using namespace std;

int main() {
    long long x;
    cin >> x;
    long long a[] = {1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600,6227020800,87178291200,130767440000,20922790000000,355687430000000,6402373700000000,121645100408832000,2432902008176640000};
    for (int i = 0; i < 20; i++) {
        if (a[i] == x) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    return 0;
}