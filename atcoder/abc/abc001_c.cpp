/* C - 風力観測 */

#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    int deg = (int)round((double)a / 10 * 100);
    int dis = (int)round((double)b / 60 * 10);
    if (!(dis >= 0 && dis <= 2)) {
        if (deg >= 1125 && deg < 3375) {
            cout << "NNE" << " ";
        } else if (deg >= 3375 && deg < 5625) {
            cout << "NE" << " ";
        } else if (deg >= 5625 && deg < 7875) {
            cout << "ENE" << " ";
        } else if (deg >= 7875 && deg < 10125) {
            cout << "E" << " ";
        } else if (deg >= 10125 && deg < 12375) {
            cout << "ESE" << " ";
        } else if (deg >= 12375 && deg < 14625) {
            cout << "SE" << " ";
        } else if (deg >= 14625 && deg < 16875) {
            cout << "SSE" << " ";
        } else if (deg >= 16875 && deg < 19125) {
            cout << "S" << " ";
        } else if (deg >= 19125 && deg < 21375) {
            cout << "SSW" << " ";
        } else if (deg >= 21375 && deg < 23625) {
            cout << "SW" << " ";
        } else if (deg >= 23625 && deg < 25875) {
            cout << "WSW" << " ";
        } else if (deg >= 25875 && deg < 28125) {
            cout << "W" << " ";
        } else if (deg >= 28125 && deg < 30375) {
            cout << "WNW" << " ";
        } else if (deg >= 30375 && deg < 32625) {
            cout << "NW" << " ";
        } else if (deg >= 32625 && deg < 34875) {
            cout << "NNW" << " ";
        } else {
            cout << "N" << " ";
        }
    } else {
        cout << "C" << " ";
    }
    if (dis <= 2) cout << 0 << endl;
    else if (dis <= 15) cout << 1 << endl;
    else if (dis <= 33) cout << 2 << endl;
    else if (dis <= 54) cout << 3 << endl;
    else if (dis <= 79) cout << 4 << endl;
    else if (dis <= 107) cout << 5 << endl;
    else if (dis <= 138) cout << 6 << endl;
    else if (dis <= 171) cout << 7 << endl;
    else if (dis <= 207) cout << 8 << endl;
    else if (dis <= 244) cout << 9 << endl;
    else if (dis <= 284) cout << 10 << endl;
    else if (dis <= 326) cout << 11 << endl;
    else cout << 12 << endl;
    return 0;
}