/* A - Calc */

#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int a;
    cin >> a;
    int result = a * (1 + a + a * a);
    cout << result << endl;
    return 0;
}