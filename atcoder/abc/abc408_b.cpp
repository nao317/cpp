/* B - */

#include <iostream>
#include <set>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    set<int> Set;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        Set.insert(num);
    }
    
    int m = Set.size();
    cout << m << endl;

    for (int x : Set) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}