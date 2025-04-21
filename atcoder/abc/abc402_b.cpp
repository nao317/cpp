/* B -  */

#include <iostream>
#include <queue>
using namespace std;

int main(void) {

    int n;
    cin >> n;
    queue<int> que;

    for (int i = 0; i < n; i++) {
        int query;
        cin >> query;
        if (query == 1) {
            int x;
            cin >> x;
            que.push(x);
        } else {
            if (!que.empty()) {
                cout << que.front() << endl;
                que.pop();
            }
        }
    }

    return 0;
    
}