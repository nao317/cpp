/* C - 風力観測 */

#include <iostream>

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> deg >> dis;
    double deg = (double)a / 10;
    double dis = (double)b / 60;
    if (deg >= 11.25 && deg < 33.75) {
        cout << "NNE" << " ";
    } else if (deg >= 33.75 && deg < 56.25) {
        cout << "NE" << " ";
    }
}