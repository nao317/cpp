// 

#include <iostream>
#include <vector>
#define n 4

using namespace std;

int main() {
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        vec[num-1]++;
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        count = vec[i] / 2 + count;
    }

    cout << count << endl;

    return 0;
}