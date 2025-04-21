/* C - */

#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    long n, m;
    cin >> n >> m;
    vector<vector<long>> vec;
    for (long i = 0; i < m; i++) {
        long k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            long a;
            cin >> a;
            vec[i][j].push_back(a);
        }
    }
    
    vector<long> vec2;
    for (long i = 0; i < n; i++) {
        long b;
        cin >> b;
        vec2.push_back(b);
    }

    for (long i = 0; i < n; i++) {
        
    }
}