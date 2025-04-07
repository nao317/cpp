/* C - 2^a * b^2 */

#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    long long n;
    cin >> n;
    long long i = 1;
    long long count = 0;
    while (i <= n) {
        if (n % i == 0) {
            long long num = n / i;
            long long root = sqrt(num);
            if (root * root == num) {
                count++;
            }
        }
        i *= 2;
    }
    cout << count << endl;
    return 0;
}