/* 総和 */

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(void) {
    
    vector<int> vec = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};

    int sum = accumulate(vec.begin(), vec.end(), 0);

    cout << sum << endl;

    return 0;
    
}