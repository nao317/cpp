// 長方形

#include <iostream>

using namespace std;

int main() {

    int a, b, c;

    cin >> a >> b >> c;

    int result;

    if (a == b) {
        result = c;
    } else if (b == c) {
        result = a;
    } else {
        result = b;
    }

    cout << result << endl;

    return 0;
    
}