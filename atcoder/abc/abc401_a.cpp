/* A - Status Code */

#include <iostream>

using namespace std;

int main(void) {

    int n;
    cin >> n;

    if (n >= 200 && n <= 299) {
        cout << "Success" << endl;
    } else {
        cout << "Failure" << endl;
    }

    return 0;

}