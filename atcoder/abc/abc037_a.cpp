/* A - 饅頭 */

#include <iostream>

using namespace std;

int main(void) {
    int a, b, c;
    cin >> a >> b >> c;
    int A, B;
    if (a > b) {
        A = b;
        B = a;
    } else {
        A = a;
        B = b;
    }
    int div1 = c / A;
    int charge = c % A;
    int div2 = charge / B;
    int result = div1 + div2;
    cout << result << endl;
    return 0;
}