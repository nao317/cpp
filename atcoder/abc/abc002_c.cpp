/* C - 直訴 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void) {
    int ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    double AB = sqrt(pow(ax - bx, 2) + pow(ay - by, 2));
    double AC = sqrt(pow(ax - cx, 2) + pow(ay - cy, 2));
    double BC = sqrt(pow(bx - cx, 2) + pow(by - cy, 2));
    double s = (AB + AC + BC) / 2;
    double S = sqrt(s * (s - AB) * (s - AC) * (s - BC));
    cout << fixed << setprecision(1) << S << endl;
    return 0;
}