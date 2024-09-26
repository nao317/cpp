// 労働時間
#include <iostream>

using namespace std;

int main() {

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    int atwork = b - a;
    int breaking = d - c;
    int result = atwork - breaking;

    cout << result << endl;

    return 0;

}