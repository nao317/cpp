/* A - ABC400party */

#include <iostream>
#include <vector>

using namespace std;

int main(void) {

    int n;
    cin >> n;
    int flag = 400 % n;
    int ans = 400 / n;
    if (flag == 0) {
        cout << ans << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}