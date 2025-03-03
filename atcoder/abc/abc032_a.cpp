/* A - 高橋君と青木君の好きな数 */

#include <iostream>

using namespace std;

int main(void) {
    int a, b, n;
    cin >> a >> b >> n;
    while (1) {
        if (n % a == 0 && n % b == 0) {
            break;
        }
        n++;
    }
    cout << n << endl;
    return 0;
}