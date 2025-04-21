/* 試合の成績 */

#include <iostream>

using namespace std;

int main(void) {

    string str;
    cin >> str;

    int count = 0;

    for (int i = 0; i < 5; i++) {

        if (str[i] == 'o') {

            count++;

        }
    }

    cout << count << endl;

    return 0;
    
}