/* B - P(X or Y) */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void) {
    int x, y;
    cin >> x >> y;
    int all = 36;
    int count = 0;
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++) {
            int sum = i + j;
            int diff = abs(i - j);
            if (sum >= x || diff >= y) {
                count++;
            }
        }
    }
    
    double par = count / (double)all;
    cout << setprecision(10) << par << endl;

    return 0;

}