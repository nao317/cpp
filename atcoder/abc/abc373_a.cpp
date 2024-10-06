#include <iostream>

using namespace std;

int main() {

    int result = 0;
    for (int i = 1; i <= 12; i++) {

        string s;
        cin >> s;
        if (s.length() == i) {
            result++;
        }
    }

    cout << result << endl;
    
    return 0;
}