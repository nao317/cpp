/* A - Approximation */

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(void) {
    int a, b;
    cin >> a >> b;
    double result = (double)a / (double)b;
    cout << round(result) << endl;
    return 0;
}