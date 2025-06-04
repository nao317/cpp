/* A - Lacked Number */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    string s;
    cin >> s;
    vector<int> vec;
    
    for (int i = 0; i < 10; i++) {
        vec.push_back(i);
    }
    for (int i = 0; i < 9; i++) {
        int num = s[i] - '0';
        vec.erase(find(vec.begin(), vec.end(), num));
    }

    cout << vec[0] << endl;
    return 0;
}