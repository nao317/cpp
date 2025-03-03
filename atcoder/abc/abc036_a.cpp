/* A - お茶 */

#include <iostream>

using namespace std;

int main(void) {
    int a, b;
    cin >> a >> b;
    int div = b / a;
    int debris = b % a;
    if (debris != 0) {
        div++;
    }
    cout << div << endl;
    return 0;
}