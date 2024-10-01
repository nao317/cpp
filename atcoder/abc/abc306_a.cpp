#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string result = "";
    
    for (int i = 0; i < n; i++) {

        string substring = s.substr(i,1);

        result = result + substring + substring;

    }

    cout << result << endl;

    return 0;

}